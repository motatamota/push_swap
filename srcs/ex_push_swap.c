/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:18:04 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 20:18:04 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ex_set_len(t_st *st)
{
	int	min;
	int	max;

	min = st->len - (st->len / 2);
	max = min - min / 3;
	st->len_1 = max - max / 2;
	st->len_2 = max / 2;
	st->len_3 = min / 3;
	min = st->len / 2;
	max = min - min / 3;
	st->len_4 = max - max / 2;
	st->len_5 = max / 2;
	st->len_6 = min / 3;
	st->first = *(st->sr + st->len_1 - 1);
	st->second = *(st->sr + st->len_1 + st->len_2 - 1);
	st->third = *(st->sr + st->len_1 + st->len_2 + st->len_3 - 1);
	st->fourth = *(st->sr + st->len_1 + st->len_2 + st->len_3 + st->len_4 - 1);
	st->fifth = *(st->sr + st->len_1 + st->len_2 + st->len_3 + st->len_4 \
	+ st->len_5 - 1);
}

void	zero_it(t_int *it)
{
	it->a = 0;
	it->b = 0;
	it->c = 0;
	it->d = 0;
	it->e = 0;
	it->f = 0;
}

void	ex_set_stack_b(t_st *st)
{
	int		n;
	t_int	it;

	n = 0;
	zero_it(&it);
	st->cp = (int *)malloc(sizeof(int) * (st->len));
	while (n < st->len)
	{
		if (*(st->box + n) <= st->second)
			ex_b_low(st, &it, n);
		else if (*(st->box + n) <= st->fourth)
			ex_b_mid(st, &it, n);
		else
			ex_b_high(st, &it, n);
		n++;
	}
}

void	ex_push_swap(t_st *st)
{
	if (!intcopy_sorted(st))
		return ;
	ex_set_len(st);
	ex_set_stack_b(st);
	ex_stack_b_half(st);
	ex_stack_b_all(st);
	ex_stack_b_end(st);
	ex_stack_a(st);
}

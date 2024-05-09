/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 10:02:01 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 10:02:01 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	intcopy_sorted(t_st *st)
{
	int	n;
	int	*cp;

	cp = (int *)malloc(sizeof(int) * st->len);
	if (!cp)
		return (0);
	n = 0;
	while (n < st->len)
	{
		*(cp + n) = *(st->box + n);
		n++;
	}
	myqsort(cp, 0, st->len - 1);
	st->sr = cp;
	if (!ft_memcmp(st->box, st->sr, sizeof(int) * st->len))
		return (0);
	return (1);
}

void	set_len(t_st *st)
{
	int	min;

	min = st->len - (st->len / 2);
	st->len_1 = min - min / 2;
	st->len_2 = min / 2;
	min = st->len / 2;
	st->len_3 = min - min / 2;
	st->len_4 = min / 2;
	st->first = *(st->sr + st->len_1 - 1);
	st->second = *(st->sr + st->len_1 + st->len_2 - 1);
	st->third = *(st->sr + st->len_1 + st->len_2 + st->len_3 - 1);
}

void	set_stack_b(t_st *st)
{
	int	n;
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	n = 0;
	st->cp = (int *)malloc(sizeof(int) * (st->len));
	if (!st->cp)
		return ;
	while (n < st->len)
	{
		if (*(st->box + n) <= st->second)
			b_low(st, &a, &b, n);
		else
			b_high(st, &c, &d, n);
		n++;
	}
}

void	push_swap(t_st *st)
{
	if (!intcopy_sorted(st))
		return ;
	set_len(st);
	set_stack_b(st);
	stack_b_half(st);
	stack_b_all(st);
	stack_a(st);
}

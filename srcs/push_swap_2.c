/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:16:50 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 11:16:50 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_low(t_st *st, int *a, int *b, int n)
{
	if (*(st->box + n) <= st->first)
	{
		*(st->cp + st->len_2 + st->len_3 + st->len_4 + *a) = *(st->box + n);
		(*a)++;
	}
	else
	{
		*(st->cp + st->len_2 + st->len_3 + st->len_4 - 1 - *b) = *(st->box + n);
		(*b)++;
	}
}

void	b_high(t_st *st, int *a, int *b, int n)
{
	if (*(st->box + n) <= st->third)
	{
		*(st->cp + st->len_3 + st->len_4 - 1 - *a) = *(st->box + n);
		(*a)++;
	}
	else
	{
		*(st->cp + *b) = *(st->box + n);
		(*b)++;
	}
}

void	stack_b_half(t_st *st)
{
	int	n;

	n = 0;
	while (n < st->len)
	{
		if (*(st->box + n) <= st->first)
			ft_printf("pb\nrb\n");
		else if (*(st->box + n) <= st->second)
			ft_printf("pb\n");
		else
			ft_printf("ra\n");
		n++;
	}
}

void	stack_b_all(t_st *st)
{
	int	n;

	n = 0;
	while (n < st->len)
	{
		if (*(st->box + n) > st->third)
			ft_printf("pb\nrb\n");
		else if (*(st->box + n) > st->second)
			ft_printf("pb\n");
		n++;
	}
	n = 0;
	while (n < st->len_4)
	{
		ft_printf("rrb\n");
		n++;
	}
}

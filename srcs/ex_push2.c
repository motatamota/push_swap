/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_push2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:47:46 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 20:47:46 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ex_push2(t_st *st, int n, int k)
{
	int	p;

	p = 0;
	if (n == 0)
	{
		while (*(st->sr + st->len - st->len_6 - st->len_5 - \
		st->len_4 - st->len_3 - 1) != *(st->cp + st->len_6 + \
		st->len_5 + st->len_4 + st->len_3 + p))
		{
			ft_printf("rb\n");
			p++;
		}
		ft_printf("pa\n");
		return (p);
	}
	while (*(st->sr + st->len - st->len_6 - st->len_5 - st->len_4 - \
	st->len_3 - 1 - n) != *(st->cp + st->len_6 + st->len_5 + \
	st->len_4 + st->len_3 + p))
		p++;
	putrb(st, k + st->len_6 + st->len_5 + st->len_4 + st->len_3, \
	p + st->len_6 + st->len_5 + st->len_4 + st->len_3);
	return (p);
}

int	ex_push1(t_st *st, int n, int k)
{
	int	p;

	p = 0;
	if (n == 0)
	{
		while (*(st->sr + st->len - st->len_6 - st->len_5 - st->len_4 \
		- st->len_3 - st->len_2 - 1) != *(st->cp + st->len_6 + st->len_5 \
		+ st->len_4 + st->len_3 + st->len_2 + p))
		{
			ft_printf("rb\n");
			p++;
		}
		ft_printf("pa\n");
		return (p);
	}
	while (*(st->sr + st->len - st->len_6 - st->len_5 - st->len_4 - \
	st->len_3 - st->len_2 - 1 - n) != *(st->cp + st->len_6 + st->len_5 \
	+ st->len_4 + st->len_3 + st->len_2 + p))
		p++;
	putrb(st, k + st->len_6 + st->len_5 + st->len_4 + st->len_3 + \
	st->len_2, p + st->len_6 + st->len_5 + st->len_4 + st->len_3 + st->len_2);
	return (p);
}

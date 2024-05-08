/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:44:24 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 20:44:24 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ex_push6(t_st *st, int n, int k)
{
	int	p;

	p = 0;
	if (n == 0)
	{
		while (*(st->sr + st->len - 1) != *(st->cp + p))
		{
			ft_printf("rb\n");
			p++;
		}
		ft_printf("pa\n");
		return (p);
	}
	while (*(st->sr + st->len - 1 - n) != *(st->cp + p))
		p++;
	putrb(st, k, p);
	return (p);
}

int	ex_push5(t_st *st, int n, int k)
{
	int	p;

	p = 0;
	if (n == 0)
	{
		while (*(st->sr + st->len - st->len_6 - 1) != *(st->cp + st->len_6 + p))
		{
			ft_printf("rb\n");
			p++;
		}
		ft_printf("pa\n");
		return (p);
	}
	while (*(st->sr + st->len - st->len_6 - 1 - n) != *(st->cp + st->len_6 + p))
		p++;
	putrb(st, k + st->len_6, p + st->len_6);
	return (p);
}

int	ex_push4(t_st *st, int n, int k)
{
	int	p;

	p = 0;
	if (n == 0)
	{
		while (*(st->sr + st->len - st->len_6 - st->len_5 - 1)
			!= *(st->cp + st->len_6 + st->len_5 + p))
		{
			ft_printf("rb\n");
			p++;
		}
		ft_printf("pa\n");
		return (p);
	}
	while (*(st->sr + st->len - st->len_6 - st->len_5 - 1 - n)
		!= *(st->cp + st->len_6 + st->len_5 + p))
		p++;
	putrb(st, k + st->len_6 + st->len_5, p + st->len_6 + st->len_5);
	return (p);
}

int	ex_push3(t_st *st, int n, int k)
{
	int	p;

	p = 0;
	if (n == 0)
	{
		while (*(st->sr + st->len - st->len_6 - st->len_5 - st->len_4 - 1)
			!= *(st->cp + st->len_6 + st->len_5 + st->len_4 + p))
		{
			ft_printf("rb\n");
			p++;
		}
		ft_printf("pa\n");
		return (p);
	}
	while (*(st->sr + st->len - st->len_6 - st->len_5 - st->len_4 - 1 - n)
		!= *(st->cp + st->len_6 + st->len_5 + st->len_4 + p))
		p++;
	putrb(st, k + st->len_6 + st->len_5 + st->len_4, p + st->len_6 \
		+ st->len_5 + st->len_4);
	return (p);
}

void	ex_stack_a(t_st *st)
{
	int	n;
	int	k;

	n = 0;
	k = 0;
	while (n < st->len)
	{
		if (n < st->len_6)
			k = ex_push6(st, n, k);
		else if (n < st->len_6 + st->len_5)
			k = ex_push5(st, n - st->len_6, k);
		else if (n < st->len_6 + st->len_5 + st->len_4)
			k = ex_push4(st, n - st->len_6 - st->len_5, k);
		else if (n < st->len_6 + st->len_5 + st->len_4 + st->len_3)
			k = ex_push3(st, n - st->len_6 - st->len_5 - st->len_4, k);
		else if (n < st->len_6 + st->len_5 + st->len_4 + st->len_3 + st->len_2)
			k = ex_push2(st, n - st->len_6 - st->len_5 \
				- st->len_4 - st->len_3, k);
		else
			k = ex_push1(st, n - st->len_6 - st->len_5 - \
				st->len_4 - st->len_3 - st->len_2, k);
		n++;
	}
}

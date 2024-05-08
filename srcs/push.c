/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:40:55 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 11:40:55 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push4(t_st *st, int n, int k)
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

int	push3(t_st *st, int n, int k)
{
	int	p;

	p = 0;
	if (n == 0)
	{
		while (*(st->sr + st->len - st->len_4 - 1) != *(st->cp + st->len_4 + p))
		{
			ft_printf("rb\n");
			p++;
		}
		ft_printf("pa\n");
		return (p);
	}
	while (*(st->sr + st->len - st->len_4 - 1 - n) != *(st->cp + st->len_4 + p))
		p++;
	putrb(st, k + st->len_4, p + st->len_4);
	return (p);
}

int	push2(t_st *st, int n, int k)
{
	int	p;

	p = 0;
	if (n == 0)
	{
		while (*(st->sr + st->len - st->len_4 - st->len_3 - 1) \
		!= *(st->cp + st->len_4 + st->len_3 + p))
		{
			ft_printf("rb\n");
			p++;
		}
		ft_printf("pa\n");
		return (p);
	}
	while (*(st->sr + st->len - st->len_4 - st->len_3 - 1 - n) \
	!= *(st->cp + st->len_4 + st->len_3 + p))
		p++;
	putrb(st, k + st->len_4 + st->len_3, p + st->len_4 + st->len_3);
	return (p);
}

int	push1(t_st *st, int n, int k)
{
	int	p;

	p = 0;
	if (n == 0)
	{
		while (*(st->sr + st->len - st->len_4 - st->len_3 - st->len_2 - 1) \
		!= *(st->cp + st->len_4 + st->len_3 + st->len_2 + p))
		{
			ft_printf("rb\n");
			p++;
		}
		ft_printf("pa\n");
		return (p);
	}
	while (*(st->sr + st->len - st->len_4 - st->len_3 - st->len_2 - 1 - n) \
	!= *(st->cp + st->len_4 + st->len_3 + st->len_2 + p))
		p++;
	putrb(st, k + st->len_4 + st->len_3 + st->len_2, p + st->len_4 + \
	st->len_3 + st->len_2);
	return (p);
}

void	stack_a(t_st *st)
{
	int	n;
	int	k;

	n = 0;
	k = 0;
	while (n < st->len)
	{
		if (n < st->len_4)
			k = push4(st, n, k);
		else if (n < st->len_4 + st->len_3)
			k = push3(st, n - st->len_4, k);
		else if (n < st->len_4 + st->len_3 + st->len_2)
			k = push2(st, n - st->len_4 - st->len_3, k);
		else
			k = push1(st, n - st->len_4 - st->len_3 - st->len_2, k);
		n++;
	}
}

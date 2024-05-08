/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:10:11 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 12:10:11 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	putrb(t_st *st, int k, int p)
{
	int	n;

	n = 0;
	if (k <= p)
	{
		while (n + k < p)
		{
			if (*(st->cp + n + k) < *(st->cp + k))
				ft_printf("rb\n");
			n++;
		}
		ft_printf("pa\n");
		return ;
	}
	while (p < k - n)
	{
		if (*(st->cp + k - n) <= *(st->cp + k))
			ft_printf("rrb\n");
		n++;
	}
	ft_printf("pa\n");
}

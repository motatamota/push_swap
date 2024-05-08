/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_push_swap3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 21:30:51 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 21:30:51 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ex_stack_b_half(t_st *st)
{
	int	n;

	n = 0;
	while (n < st->len)
	{
		if (*(st->box + n) <= st->third && *(st->box + n) > st->second)
			ft_printf("pb\nrb\n");
		else if (*(st->box + n) <= st->fourth && *(st->box + n) > st->third)
			ft_printf("pb\n");
		else
			ft_printf("ra\n");
		n++;
	}
}

void	ex_stack_b_all(t_st *st)
{
	int	n;

	n = 0;
	while (n < st->len)
	{
		if (*(st->box + n) <= st->second && *(st->box + n) > st->first)
			ft_printf("pb\nrb\n");
		else if (*(st->box + n) <= st->fifth && *(st->box + n) > st->fourth)
			ft_printf("pb\n");
		else if (*(st->box + n) <= st->first || *(st->box + n) > st->fifth)
			ft_printf("ra\n");
		n++;
	}
}

void	ex_stack_b_end(t_st *st)
{
	int	n;

	n = 0;
	while (n < st->len)
	{
		if (*(st->box + n) <= st->first)
			ft_printf("pb\nrb\n");
		else if (*(st->box + n) > st->fifth)
			ft_printf("pb\n");
		n++;
	}
}

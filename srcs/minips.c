/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minips.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:24:35 by tashiget          #+#    #+#             */
/*   Updated: 2024/05/09 15:24:35 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	minips2(t_st *st)
{
	if (st->box[0] != st->sr[0])
		ft_printf("sa\n");
}

void	minips3(t_st *st)
{
	if (st->box[0] == st->sr[0] && st->box[1] == st->sr[2])
		ft_printf("pb\nsa\npa\n");
	else if (st->box[0] == st->sr[1] && st->box[1] == st->sr[0])
		ft_printf("rra\nsa\nrra\n");
	else if (st->box[0] == st->sr[1] && st->box[1] == st->sr[2])
		ft_printf("rra\n");
	else if (st->box[0] == st->sr[2] && st->box[1] == st->sr[0])
		ft_printf("ra\n");
	else if (st->box[0] == st->sr[2] && st->box[1] == st->sr[1])
		ft_printf("sa\nrra\n");
}

void	minips4(t_st *st)
{
	if (st->box[0] == st->sr[0])
		ft_printf("pb\n");
	else if (st->box[1] == st->sr[0])
		ft_printf("ra\npb\n");
	else if (st->box[2] == st->sr[0])
		ft_printf("ra\nra\npb\n");
	else
		ft_printf("rra\npb\n");
	if (newboxsr(st))
		return ;
	minips3(st);
	ft_printf("pa\n");
}

void	minips5(t_st *st)
{
	if (st->box[0] == st->sr[0])
		ft_printf("pb\n");
	else if (st->box[1] == st->sr[0])
		ft_printf("ra\npb\n");
	else if (st->box[2] == st->sr[0])
		ft_printf("ra\nra\npb\n");
	else if (st->box[3] == st->sr[0])
		ft_printf("rra\nrra\npb\n");
	else
		ft_printf("rra\npb\n");
	if (newboxsr4(st))
		return ;
	minips4(st);
	ft_printf("pa\n");
}

void	minips(t_st *st)
{
	if (st->len == 2)
		minips2(st);
	else if (st->len == 3)
		minips3(st);
	else if (st->len == 4)
		minips4(st);
	else if (st->len == 5)
		minips5(st);
}

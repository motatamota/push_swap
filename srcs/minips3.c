/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minips3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:21:17 by tashiget          #+#    #+#             */
/*   Updated: 2024/05/09 17:21:17 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remakebox4(t_st *st, int *box, int pos)
{
	int	n;
	int	m;

	n = 0;
	while (n < 4 - pos)
	{
		box[n] = st->box[n + pos + 1];
		n++;
	}
	m = 0;
	while (n < 4)
	{
		box[n] = st->box[m];
		n++;
		m++;
	}
	free(st->box);
	st->box = box;
}

void	remakesr4(t_st *st, int *sr)
{
	int	n;

	n = 0;
	while (n < 4)
	{
		sr[n] = st->sr[n + 1];
		n++;
	}
	free(st->sr);
	st->sr = sr;
}

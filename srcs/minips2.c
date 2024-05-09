/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minips2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:31:15 by tashiget          #+#    #+#             */
/*   Updated: 2024/05/09 16:31:15 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	initial(t_st *st)
{
	int	n;

	n = 0;
	while (st->sr[0] != st->box[n])
		n++;
	return (n);
}

void	remakebox(t_st *st, int *box, int pos)
{
	int	n;
	int	m;

	n = 0;
	while (n < 3 - pos)
	{
		box[n] = st->box[n + pos + 1];
		n++;
	}
	m = 0;
	while (n < 3)
	{
		box[n] = st->box[m];
		n++;
		m++;
	}
	free(st->box);
	st->box = box;
}

void	remakesr(t_st *st, int *sr)
{
	int	n;

	n = 0;
	while (n < 3)
	{
		sr[n] = st->sr[n + 1];
		n++;
	}
	free(st->sr);
	st->sr = sr;
}

int	newboxsr(t_st *st)
{
	int	*box;
	int	*sr;
	int	pos;

	box = (int *)malloc(sizeof(int) * 3);
	sr = (int *)malloc(sizeof(int) * 3);
	if (!box || !sr)
		return (1);
	pos = initial(st);
	remakebox(st, box, pos);
	remakesr(st, sr);
	return (0);
}

int	newboxsr4(t_st *st)
{
	int	*box;
	int	*sr;
	int	pos;

	box = (int *)malloc(sizeof(int) * 4);
	sr = (int *)malloc(sizeof(int) * 4);
	if (!box || !sr)
		return (1);
	pos = initial(st);
	remakebox4(st, box, pos);
	remakesr4(st, sr);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_push_swap2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:27:36 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 20:27:36 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ex_b_low(t_st *st, t_int *it, int n)
{
	if (*(st->box + n) <= st->first)
	{
		*(st->cp + st->len_2 + st->len_3 + st->len_4 + st->len_5 \
		+ st->len_6 + it->a) = *(st->box + n);
		it->a++;
	}
	else
	{
		*(st->cp + st->len_3 + st->len_4 + st->len_5 + st->len_6 + \
		it->b) = *(st->box + n);
		it->b++;
	}
}

void	ex_b_mid(t_st *st, t_int *it, int n)
{
	if (*(st->box + n) <= st->third)
	{
		*(st->cp + st->len_4 + st->len_5 + st->len_6 + it->c) = *(st->box + n);
		it->c++;
	}
	else
	{
		*(st->cp + st->len_4 + st->len_5 + st->len_6 - 1 - \
		it->d) = *(st->box + n);
		it->d++;
	}
}

void	ex_b_high(t_st *st, t_int *it, int n)
{
	if (*(st->box + n) <= st->fifth)
	{
		*(st->cp + st->len_5 + st->len_6 - 1 - it->e) = *(st->box + n);
		it->e++;
	}
	else
	{
		*(st->cp + st->len_6 - 1 - it->f) = *(st->box + n);
		it->f++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 10:02:06 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 10:02:06 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "ft_printf.h"
# include "libft.h"

typedef struct s_st
{
	int	len;
	int	*box;
	int	*sr;
	int	*cp;
	int	first;
	int	second;
	int	third;
	int	fourth;
	int	fifth;
	int	len_1;
	int	len_2;
	int	len_3;
	int	len_4;
	int	len_5;
	int	len_6;
}	t_st;

typedef struct s_int
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;
}	t_int;

void	myqsort(int *box, int low, int high);
void	stack_a(t_st *st);
void	push_swap(t_st *st);
void	b_low(t_st *st, int *a, int *b, int n);
void	b_high(t_st *st, int *a, int *b, int n);
void	stack_b_half(t_st *st);
void	stack_b_all(t_st *st);
void	stack_a(t_st *st);
void	putrb(t_st *st, int k, int p);
int		intcopy_sorted(t_st *st);
void	ex_push_swap(t_st *st);
void	ex_b_low(t_st *st, t_int *it, int n);
void	ex_b_mid(t_st *st, t_int *it, int n);
void	ex_b_high(t_st *st, t_int *it, int n);
void	ex_stack_b_half(t_st *st);
void	ex_stack_b_all(t_st *st);
void	ex_stack_b_end(t_st *st);
void	ex_stack_a(t_st *st);
int		ex_push2(t_st *st, int n, int k);
int		ex_push1(t_st *st, int n, int k);

#endif

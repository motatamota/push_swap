/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:01:20 by tashiget          #+#    #+#             */
/*   Updated: 2024/04/02 21:01:20 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_list **a)
{
	t_list *k;
	t_list *l;

	if (!(*a) || !((*a)->next))
		return ;
	k = *a;
	*a = (*a)->next;
	k->next = 0;
	l = ft_lstlast(*a);
	l->next = k;
}

void	rra(t_list **a)
{
	t_list	*p;
	t_list	*q;

	if (!(*a) || !((*a)->next))
		return ;
	p = *a;
	q = p->next;
	while (q->next)
	{
		p = q;
		q = q->next;
	}
	q->next = 0;
	p->next = 0;
	ft_lstadd_front(a, q);
}

void	rr(t_list **a, t_list **b)
{
	if (!(*a) || !((*a)->next))
		return ;
	if (!(*b) || !((*b)->next))
		return ;
	ra(a);
	ra(b);
}

void	rrr(t_list **a, t_list **b)
{
	if (!(*a) || !((*a)->next))
		return ;
	if (!(*b) || !((*b)->next))
		return ;
	rra(a);
	rra(b);
}

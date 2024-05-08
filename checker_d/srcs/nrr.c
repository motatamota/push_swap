/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:06:23 by tashiget          #+#    #+#             */
/*   Updated: 2024/04/02 21:06:23 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*p;

	if (!(*b))
		return ;
	p = *b;
	*b = (*b)->next;
	p->next = *a;
	*a = p;
}

void	sa(t_list **a)
{
	t_list	*p;

	if (!(*a) || !((*a)->next))
		return ;
	p = *a;
	*a = (*a)->next;
	p->next = (*a)->next;
	(*a)->next = p;
}

void	ss(t_list **a, t_list **b)
{
	if (!(*a) || !((*a)->next))
		return ;
	if (!(*b) || !((*b)->next))
		return ;
	sa(a);
	sa(b);
}

void	set_sr(t_list **a, int ac, int *box)
{
	t_list	*k;
	int		*p;
	int		n;

	n = 1;
	p = (int *)malloc(sizeof(int));
	*p = *box;
	*a = ft_lstnew(p);
	k = *a;
	while (n < ac)
	{
		p = (int *)malloc(sizeof(int));
		*p = *(box + n);
		k->next = ft_lstnew(p);
		k = k->next;
		n++;
	}
}

int	comp(t_list *a, t_list *sr)
{
	while (a && sr)
	{
		if (*(int *)a->content != *(int *)sr->content)
			return (0);
		a = a->next;
		sr = sr->next;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:56:32 by tashiget          #+#    #+#             */
/*   Updated: 2024/04/02 21:56:32 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	set_ch2(t_list **a, int ac, char **av)
{
	t_list	*k;
	int		*p;
	int		n;

	n = 1;
	if (!checknum(*av))
		return (0);
	p = (int *)malloc(sizeof(int));
	*p = ft_atoi(*av);
	*a = ft_lstnew(p);
	k = *a;
	while (n < ac)
	{
		if (!checknum(*(av + n)))
			return (0);
		p = (int *)malloc(sizeof(int));
		*p = ft_atoi(*(av + n));
		k->next = ft_lstnew(p);
		k = k->next;
		n++;
	}
	return (1);
}

void	set_box(int *box, int ac, char **av)
{
	int	n;

	n = 0;
	while (n < ac)
	{
		*(box + n) = ft_atoi(*(av + n));
		n++;
	}
}

void	delint(void	*n)
{
	free((int *)n);
}

void	ft_free(t_list **a, t_list **b, t_list **c)
{
	if (!a)
		ft_lstclear(a, delint);
	if (!b)
		ft_lstclear(b, delint);
	if (!c)
		ft_lstclear(c, delint);
}

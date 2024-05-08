/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 22:14:19 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 22:14:19 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ifrr(char *str, t_list **a, t_list **b)
{
	if (!ft_memcmp(str, "ra\n", 4))
	{
		ra(a);
	}
	else if (!ft_memcmp(str, "rb\n", 4))
		ra(b);
	else if (!ft_memcmp(str, "rra\n", 5))
		rra(a);
	else if (!ft_memcmp(str, "rrb\n", 5))
		rra(b);
	else if (!ft_memcmp(str, "rr\n", 4))
		rr(a, b);
	else if (!ft_memcmp(str, "rrr\n", 5))
		rrr(a, b);
}

void	ifnrr(char *str, t_list **a, t_list **b)
{
	if (!ft_memcmp(str, "pa\n", 4))
		pa(a, b);
	if (!ft_memcmp(str, "pb\n", 4))
		pa(b, a);
	if (!ft_memcmp(str, "sa\n", 4))
		sa(a);
	if (!ft_memcmp(str, "sb\n", 4))
		sa(b);
	if (!ft_memcmp(str, "ss\n", 4))
		ss(a, b);
}

int	checknum(char *num)
{
	int	n;

	n = 0;
	if (*num == '-')
		n++;
	while (*(num + n))
	{
		if (!(*(num + n) >= '0' && *(num + n) <= '9'))
			return (0);
		n++;
	}
	return (1);
}

int	setch(t_list **a, t_list **sr, int ac, char **av)
{
	int		*box;

	box = (int *)malloc(sizeof(int) * ac);
	if (!box)
		return (0);
	if (!set_ch2(a, ac, av))
	{
		free(box);
		return (0);
	}
	set_box(box, ac, av);
	myqsort(box, 0, ac - 1);
	set_sr(sr, ac, box);
	free(box);
	return (1);
}

int	main(int ac, char **av)
{
	char	*str;
	t_list	*list_a;
	t_list	*list_b;
	t_list	*list_sr;

	if (ac < 2)
		return (0);
	list_b = 0;
	if (!setch(&list_a, &list_sr, ac - 1, av + 1))
		return (1);
	while ((str = get_next_line(STDIN_FILENO)))
	{
		if (*str == 'r')
		{
			ifrr(str, &list_a, &list_b);
		}
		else
			ifnrr(str, &list_a, &list_b);
	}
	if (comp(list_a, list_sr))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	if (!list_b)
		ft_free(&list_a, &list_b, &list_sr);
	else
		ft_free(&list_a, 0, &list_sr);
	return (0);
}

__attribute__((destructor))
static void destructor() {
    system("leaks -q checker");
}
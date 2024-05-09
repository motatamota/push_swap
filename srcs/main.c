/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 10:19:51 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 10:19:51 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checknum(char *num)
{
	int	n;

	n = 0;
	if (*(num + n) == '-')
		n++;
	while (*(num + n))
	{
		if (!(*(num + n) >= '0' && *(num + n) <= '9'))
			return (0);
		n++;
	}
	return (1);
}

void	freed(t_st *st)
{
	if (st->box)
		free(st->box);
	if (st->sr)
		free(st->sr);
	if (st->cp)
		free(st->cp);
}

int	set_box(t_st *st, int ac, char **av)
{
	int		n;
	char	*num;

	n = 1;
	while (n < ac)
	{
		num = *(av + n);
		if (!checknum(num))
		{
			ft_printf("Error\n");
			return (0);
		}
		*(st->box + n - 1) = ft_atoi(num);
		n++;
	}
	st->len = ac - 1;
	return (1);
}

int	main(int ac, char **av)
{
	t_st	st;

	st.cp = 0;
	st.sr = 0;
	st.box = 0;
	if (ac == 1)
		return (0);
	st.box = (int *)malloc(sizeof(int) * (ac - 1));
	if (!st.box)
		return (1);
	if (!set_box(&st, ac, av))
	{
		free(st.box);
		return (1);
	}
	if (ac < 0)
		push_swap(&st);
	else
		ex_push_swap(&st);
	freed(&st);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q push_swap");
// }

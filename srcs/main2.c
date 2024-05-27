/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:36:42 by tashiget          #+#    #+#             */
/*   Updated: 2024/05/27 09:31:08 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkint(char *str)
{
	long	ans;
	int		minus;

	ans = 0;
	minus = 1;
	if (*str == '-')
		minus = -1;
	while (*str)
	{
		ans = 10 * ans + (*str - '0');
		str++;
	}
	ans = ans * minus;
	if (ans > INT_MAX || ans < INT_MIN)
		return (0);
	return (1);
}

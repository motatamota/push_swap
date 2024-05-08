/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chcker.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 22:16:29 by tashiget          #+#    #+#             */
/*   Updated: 2024/03/30 22:16:29 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <unistd.h>
# include "ft_printf.h"
# include "get_next_line.h"
# include "libft.h"

void	ra(t_list **a);
void	rra(t_list **a);
void	rr(t_list **a, t_list **b);
void	rrr(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	sa(t_list **a);
void	ss(t_list **a, t_list **b);
void	set_sr(t_list **a, int ac, int *box);
int		comp(t_list *a, t_list *sr);
void	myqsort(int	*box, int low, int high);
void	set_box(int *box, int ac, char **av);
int		set_ch2(t_list **a, int ac, char **av);
void	ft_free(t_list **a, t_list **b, t_list **c);
int		checknum(char *num);

#endif

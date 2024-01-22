/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:25:12 by marboccu          #+#    #+#             */
/*   Updated: 2024/01/19 19:20:15 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long ft_atol(const char *str)
{
	long num;
	int sign;
	int i;

	num = 0;
	sign = 1;
	i = 0;

	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;

	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

void ft_stack_init(t_stack **a, char **av, bool is_ac_2)
{
	long num;
	int i;

	i = 0;
	while (av[i])
	{
		if (ft_syntax_error(av[i]))
			ft_free_error(a, av, is_ac_2);

		num = ft_atol(av[i]);

		if (num > INT_MAX || num < INT_MIN)
			ft_free_error(a, av, is_ac_2);

		if (ft_duplicate_error(*a, (int)num))
			ft_free_error(a, av, is_ac_2);

		ft_add_new_node(a, (int)num);
		i++;
	}
	if (is_ac_2)
		ft_free_matrix(av);
}

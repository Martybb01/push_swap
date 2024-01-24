/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:25:12 by marboccu          #+#    #+#             */
/*   Updated: 2024/01/24 13:49:43 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_stack_init(t_stack **a, char **av)
{
	long num;
	int i;

	i = 0;
	num = 0;
	while (av[i])
	{
		// if (ft_syntax_error(av[i]))
		// 	ft_free_error(a, av);

		// num = ft_atol(av[i]);

		// if (num > INT_MAX || num < INT_MIN)
		// 	ft_free_error(a, av);

		// if (ft_duplicate_error(*a, (int)num))
		// 	ft_free_error(a, av);

		ft_add_new_node(a, (int)num);
		i++;
	}
}

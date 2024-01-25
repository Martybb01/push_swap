/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:06:12 by marboccu          #+#    #+#             */
/*   Updated: 2024/01/24 14:19:40 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack *stack_a;
	// int i;

	stack_a = checker_input(ac, av);
	// i = 0;
	ft_stack_init(&stack_a, av + 1);
	if (stack_a == NULL)
		ft_error();
	while (stack_a)
	{
		ft_printf("stack_a = %d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	return (0);
}

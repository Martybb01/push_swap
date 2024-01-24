/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:06:12 by marboccu          #+#    #+#             */
/*   Updated: 2024/01/24 13:50:27 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack *ft_new_node(int data)
// {
// 	t_stack *node;

// 	node = malloc(sizeof(t_stack));
// 	if (!node)
// 		return (NULL);
// 	node->value = data;
// 	node->next = NULL;
// 	return (node);
// }

// t_stack *ft_new_stack(char **values)
// {
// 	t_stack *stack;
// 	t_stack *temp;
// 	int i;

// 	stack = ft_new_node(ft_atoi(*values));
// 	temp = stack;
// 	i = 1;
// 	while (values[i])
// 	{
// 		temp->next = ft_new_node(ft_atoi(values[i]));
// 		temp = temp->next;
// 		i++;
// 	}
// 	return (stack);
// }

// int main(int ac, char **av)
// {
// 	t_stack *a;
// 	//  t_stack *b;

// 	a = NULL;
// 	//  b = NULL;
// 	if (ac == 1 || (ac == 2 && !av[1][0]))
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	else if (ac == 2)
// 	{
// 		av = ft_super_split(av[1], 32);
// 	}
// 	ft_stack_init(&a, av + 1, ac == 2);
// 	while (*av)
// 	{
// 		printf("%s\n", *av);
// 		av++;
// 	}

// 	return (0);
// }

int main(int ac, char **av)
{
	t_stack *stack_a;
	// int i;

	stack_a = checker_input(ac, av);
	// i = 0;
	//  if (stack_a == NULL)
	//  	ft_error();
	// ft_stack_init(&stack_a, av + 1);
	while (stack_a)
	{
		ft_printf("stack_a = %d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	return (0);
}

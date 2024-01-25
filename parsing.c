/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:50:39 by marboccu          #+#    #+#             */
/*   Updated: 2024/01/25 16:59:46 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *checker_string(char **av)
{
	t_stack *stack_a;
	char **tmp;
	int i;
	int j;

	stack_a = NULL;
	i = 0;
	tmp = ft_split(av[1], 32);
	while (tmp[i])
	{
		ft_syntax_error(tmp[i]);
		ft_duplicate_error(stack_a, ft_atoi(tmp[i]));
		j = ft_atoi(tmp[i]);
		ft_add_new_node(&stack_a, j);
		// printf("j = %d\n", j);
		i++;
	}
	free(tmp);
	return (stack_a);
}

t_stack *checker_input(int ac, char **av)
{
	t_stack *stack_a;
	int i;
	int j;

	i = 1;
	stack_a = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		ft_error();
	else if (ac == 2)
		stack_a = checker_string(av);
	else if (ac > 2)
	{
		while (i < ac)
		{
			ft_syntax_error(av[i]);
			ft_duplicate_error(stack_a, ft_atoi(av[i]));
			j = ft_atoi(av[i]);
			ft_add_new_node(&stack_a, j);
			// printf("j = %d\n", j);
			i++;
		}
	}
	return (stack_a);
}

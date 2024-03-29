/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:36:41 by marboccu          #+#    #+#             */
/*   Updated: 2024/01/25 16:51:47 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_free_matrix(char **matrix)
{
	int i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void ft_free_error(t_stack **a, char **av)
{
	(void)a;
	(void)av;
	exit(EXIT_FAILURE);
}

int ft_syntax_error(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 43 || str[i] == 45 || (str[i] >= 48 && str[i] <= 57))
		{
			if (str[i + 1] == 43 || str[i + 1] == 45)
				ft_error();
			i++;
		}
		else
			ft_error();
	}
	return (0);
}

int ft_duplicate_error(t_stack *stack, int num)
{
	if (stack == NULL)
		return (0);
	while (stack)
	{
		if (stack->value == num)

			ft_error();
		stack = stack->next;
	}
	return (0);
}
void ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

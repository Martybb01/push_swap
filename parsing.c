/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:50:39 by marboccu          #+#    #+#             */
/*   Updated: 2024/01/24 13:52:16 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int atoi_plus(char *str)
{
	int res;
	int i;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		// if (str[i] < '0' || str[i] > '9')
		// {
		// 	ft_printf("str = %s\n", str);
		// 	ft_error();
		// }
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

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
		j = atoi_plus(tmp[i]);
		ft_add_new_node(&stack_a, j);
		printf("j = %d\n", j);
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
			j = atoi_plus(av[i]);
			ft_add_new_node(&stack_a, j);
			printf("j = %d\n", j);
			i++;
		}
	}
	return (stack_a);
}

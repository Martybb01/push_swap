/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:03:57 by marboccu          #+#    #+#             */
/*   Updated: 2024/01/24 13:48:16 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft_super/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <limits.h>
#include <sys/types.h>

typedef struct s_stack
{
	int value;
	int curr_pos;
	int final_idx;
	int push_price;
	bool cheapest;
	bool above_mid;
	struct s_stack *next;
	struct s_stack *prev;
} t_stack;

char **ft_super_split(char *str, char separator);

void ft_stack_init(t_stack **a, char **av);

void ft_free_matrix(char **matrix);
void ft_free_error(t_stack **a, char **av);
int ft_syntax_error(char *str);
int ft_duplicate_error(t_stack *stack, int num);
void ft_error(void);

t_stack *ft_find_last_node(t_stack *head);
void ft_add_new_node(t_stack **stack, int num);

t_stack *checker_input(int ac, char **av);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:57:47 by marboccu          #+#    #+#             */
/*   Updated: 2024/01/19 19:55:31 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_count_words(char *str, char separator)
{
	int count;
	bool is_word;

	count = 0;
	while (*str)
	{
		is_word = false;
		while (*str == separator)
			++str;
		while (*str && *str != separator)
		{
			if (!is_word)
			{
				++count;
				is_word = true;
			}
			++str;
		}
	}
	return (count);
}

static char *ft_next_word(char *str, char separator)
{
	static int cursor = 0;
	char *next_str;
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[cursor] == separator)
		++cursor;
	while (str[cursor + len] && (str[cursor + len] != separator))
		++len;
	next_str = malloc((size_t)len * sizeof(char) + 1);
	if (!next_str)
		return (NULL);
	while (str[cursor] && (str[cursor] != separator))
		next_str[i++] = str[cursor++];
	next_str[i] = '\0';
	return (next_str);
}

// useful for creating a fake av vector in the heap
char **ft_super_split(char *str, char separator)
{
	int total_words;
	char **words;
	int i;

	i = 0;
	total_words = ft_count_words(str, separator);
	if (!total_words)
		exit(EXIT_FAILURE);
	words = malloc(sizeof(char *) * (size_t)(total_words + 2)); // mimic the argv vector
	if (!words)
		return (NULL);
	while (total_words-- >= 0)
	{
		if (i == 0)
		{
			words[i] = malloc(sizeof(char));
			if (!words[i])
				return (NULL);
			words[i++][0] = '\0';
			continue; // go back to the beginning of the loop
		}
		words[i++] = ft_next_word(str, separator);
	}
	words[i] = NULL;
	return (words);
}

// int main(int ac, char **av)
// {
// 	int i;
// 	(void)ac;

// 	i = 0;
// 	av = super_split("1 2 3 4 5 6 7 8 9 10", 32);
// 	while (av[i])
// 	{
// 		printf("%s\n", av[i]);
// 		i++;
// 	}
// 	return (0);
// }

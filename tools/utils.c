/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:39:11 by aheno             #+#    #+#             */
/*   Updated: 2026/02/04 12:01:54 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

int	commande(char *what)
{
	if (!ft_strncmp(what, "simple", 6))
		return (3);
	else if (!ft_strncmp(what, "medium", 6))
		return (4);
	else if (!ft_strncmp(what, "complex", 7))
		return (5);
	else if (!ft_strncmp(what, "bench", 5))
		return (10);
	else if (!ft_strncmp(what, "bench", 5))
		return (0);
	else
		return (0);
}

void	whatiwant(int want, t_stack **a, t_stack **b)
{
	int		size;
	float	disorder;

	disorder = compute_disorder(a);
	size = lenlist(a);
	if (disorder == 0)
		want = 1;
	else if (size <= 3 && size > 1 && !*b)
	{
		sort_three(a);
		return ;
	}
	if (want == 0 || want % 10 == 0)
		adaptative(a, b, disorder);
	else if (want == 3 || want % 10 == 3)
		chosetri(a, b);
	else if (want == 4 || want % 10 == 4)
		chunk_sort(a, b);
	else if (want == 5 || want % 10 == 5)
		radix_lsd(a, b);
	else if (want >= 9)
		print_bench(a, disorder, what_strategy(want % 10, a));
	else
		return ((void)ft_printfd(1, "\e[1;97m\x1B[31mError\x1B[0m\e[0m"));
}

int	adaptative(t_stack **a, t_stack **b, float disorder)
{
	int	size;

	size = lenlist(a);
	if (size <= 3 && size > 1 && !*b)
	{
		sort_three(a);
		return (-1);
	}
	if (disorder < 0.2)
		chosetri(a, b);
	else if (disorder < 0.5)
		chunk_sort(a, b);
	else
		radix_lsd(a, b);
	return (-1);
}

float	compute_disorder(t_stack **stack)
{
	t_stack	*i;
	t_stack	*j;
	float	mistakes;
	float	total_pairs;

	i = *stack;
	j = (*stack)->next;
	mistakes = 0.00;
	total_pairs = 0.00 ;
	while (i != *stack || total_pairs == 0)
	{
		while (j != *stack)
		{
			total_pairs += 1;
			if (i->data > j->data)
				mistakes += 1;
			j = j->next;
		}
		i = i->next;
		j = i->next;
	}
	return (mistakes / total_pairs);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:39:11 by aheno             #+#    #+#             */
/*   Updated: 2026/01/28 15:08:47 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

int	commande(char *what)
{
	if (!ft_strncmp(what, "simple", 6))
		return (1);
	if (!ft_strncmp(what, "complex", 6))
		return (2);
	else
		return (0);
}

void	whatiwant(int want, float disorder, t_stack **a, t_stack **b)
{
	int	size;

	size = lenlist(a);
	if (size <= 3 && size > 1 && !*b)
	{
		sort_three(a);
		return ;
	}
	if (want == -1)
		want = adaptative(a, b, disorder);
	if (want == 1)
		chosetri(a, b);
	if (want == 2)
		chunk_sort(a, b);
	// else
	// 	 algorithme avancé à implémenter
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
	// else
	// 	 algorithme avancé à implémenter
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

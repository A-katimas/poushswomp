/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:39:11 by aheno             #+#    #+#             */
/*   Updated: 2026/02/05 16:07:49 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_utils.h"

int	get_flags(int actual_flags, char *current_flags)
{
	if (actual_flags == 0 || actual_flags == 10)
	{
		if (!ft_strncmp(current_flags, "simple", 6))
			return (actual_flags + 2);
		else if (!ft_strncmp(current_flags, "medium", 6))
			return (actual_flags + 3);
		else if (!ft_strncmp(current_flags, "complex", 7))
			return (actual_flags + 4);
		else if (!ft_strncmp(current_flags, "bench", 5) && actual_flags == 0)
			return (actual_flags + 10);
		else if (!ft_strncmp(current_flags, "adaptative", 5))
			return (actual_flags + 1);
	}
	else if (actual_flags < 10)
	{
		if (!ft_strncmp(current_flags, "bench", 5))
			return (actual_flags + 10);
	}
	return (-1);
}

void	what_i_do(int want, t_stack **a, t_stack **b)
{
	int		size;
	float	disorder;
	int		calcul_disorder;

	disorder = compute_disorder(a);
	calcul_disorder = (int)(disorder * 100) - ((int)disorder * 100);
	size = list_size(a);
	if (want == -1)
		return ((void)ft_printfd(2, "\e[1;97m\x1B[31mError\x1B[0m\e[0m\n"));
	if (disorder == 0)
		return ;
	if (size <= 3 && size > 1 && !*b)
		sort_three(a);
	else if (size <= 5)
		sort_five(a, b);
	else if (want % 10 == 1 || want % 10 == 0)
		adaptative(a, b, disorder);
	else if (want % 10 == 2)
		chosetri(a, b);
	else if (want % 10 == 3)
		chunk_sort(a, b);
	else if (want % 10 == 4)
		radix_lsb(a, b);
	if (want > 9)
		print_bench(a, disorder, get_strategy(want % 10, a));
}

int	adaptative(t_stack **a, t_stack **b, float disorder)
{
	int	size;

	size = list_size(a);
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
		radix_lsb(a, b);
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
	total_pairs = 0.00;
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

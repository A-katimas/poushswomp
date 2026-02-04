/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:39:11 by aheno             #+#    #+#             */
/*   Updated: 2026/02/04 16:32:35 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

char	*disorder_to_str(float disorder);

int	commande(int actual, char *what)
{
	if (actual == 0 || actual == 10)
	{
		if (!ft_strncmp(what, "simple", 6))
			return (actual + 2);
		else if (!ft_strncmp(what, "medium", 6))
			return (actual + 3);
		else if (!ft_strncmp(what, "complex", 7))
			return (actual + 4);
		else if (!ft_strncmp(what, "bench", 5) && actual == 0)
			return (actual + 10);
		else if (!ft_strncmp(what, "adaptative", 5))
			return (actual + 1);
	}
	else if (actual < 10)
	{
		if (!ft_strncmp(what, "bench", 5))
			return (actual + 10);
	}
	return (-1);
}

void	whatiwant(int want, t_stack **a, t_stack **b)
{
	int		size;
	float	disorder;
	int		calcul_disorder;

	disorder = compute_disorder(a);
	calcul_disorder = (int)(disorder * 100) - ((int)disorder * 100);
	size = lenlist(a);
	if (want == -1)
		return ((void)ft_printfd(2, "\e[1;97m\x1B[31mError\x1B[0m\e[0m\n"));
	if (disorder == 0)
		return ;
	if (size <= 3 && size > 1 && !*b)
		sort_three(a);
	if (want % 10 == 1 || want % 10 == 0)
		adaptative(a, b, disorder);
	if (want % 10 == 2)
		chosetri(a, b);
	if (want % 10 == 3)
		chunk_sort(a, b);
	if (want % 10 == 4)
		radix_lsd(a, b);
	if (want > 9)
		print_bench(a, disorder, what_strategy(want % 10, a));

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

char	*disorder_to_str(float disorder)
{
	ft_printf("la %d",disorder);
	return("relou");
}


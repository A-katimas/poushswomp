/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:59:19 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 18:14:34 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void	stack_to_array(t_stack *a, int *arr)
{
	int	i;

	i = 0;
	while (a)
	{
		arr[i] = a->data;
		i++;
		a = a->next;
	}
}

void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	assign_index(t_stack *a, int *sorted, int size)
{
	t_stack	*tmp;
	int		i;

	tmp = a;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->data == sorted[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}


void 	chunk_sort(t_stack **a, t_stack **b)
{

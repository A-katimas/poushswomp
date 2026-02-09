/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intisialisation_tool.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:11:30 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/09 12:50:24 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_utils.h"

int	init(char **entrer, t_stack **a, t_stack **b, t_datastack *data)
{
	int	i;
	int	error;
	int	len ;

	i = 1;
	while (entrer[i][0] == '-' && entrer[i][1] == '-')
		i++;
	init_data(data);
	if (ft_atol(entrer[i]) < INT_MIN || ft_atol(entrer[i]) > INT_MAX)
		return (ft_printfd(2, "Error\n"), 0);
	*a = list_new(ft_atoi(entrer[i]), data);
	*b = NULL;
	i++;
	error = init_list(entrer, i, a, data);
	if (error == 0)
	{
		len = list_size(a);
		while (len--)
			del_node(a, *a);
		return (ft_printfd(2, "Error\n"), 0);
	}
	return (1);
}

int	init_list(char **enter, int i, t_stack **a, t_datastack *data)
{
	while (enter[i])
	{
		if (ft_is_number(enter[i]))
		{
			if (has_duplicated(ft_atoi(enter[i]), a) == 0)
				return (0);
			if (ft_atol(enter[i]) < INT_MIN || ft_atol(enter[i]) > INT_MAX)
				return (0);
			list_add(a, list_new(ft_atoi(enter[i]), data));
		}
		else
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicated(int find, t_stack **stack)
{
	t_stack	*temp ;

	temp = *stack;
	while (temp->next != *stack)
	{
		if (find == temp->data)
			return (0);
		temp = temp->next;
	}
	if (find == temp->data)
		return (0);
	return (1);
}

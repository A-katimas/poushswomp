/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:12:32 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 20:39:25 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_utils.h"

t_stack	*list_new(int content, t_datastack *data)
{
	t_stack	*newlist;

	newlist = ft_calloc(1, sizeof(t_stack));
	if (newlist == NULL)
		return (NULL);
	newlist->datastack = data;
	newlist->data = content;
	newlist->next = newlist;
	newlist->prev = newlist;
	return (newlist);
}

void	list_add(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

	if (!lst || !new)
		return ;
	temp = (*lst)->prev;
	temp->next = new;
	(*lst)->prev = new;
	new->prev = temp;
	new->next = *lst;
}

void	del_node(t_stack **lst, t_stack *sup)
{
	t_stack	*temp;
	t_stack	*point;

	if (!lst || *lst == NULL )
		return ;
	temp = sup->next;
	point = sup->prev;
	if (sup == sup->next)
	{
		*lst = NULL;
		return (free(sup));
	}
	if (sup->prev == sup->next)
	{
		*lst = temp;
		(*lst)->next = *lst ;
		(*lst)->prev = *lst ;
		return (free(sup));
	}
	temp->prev = point;
	point->next = temp;
	if (*lst == sup)
		*lst = temp;
	free(sup);
}

int	list_size(t_stack **stack)
{
	int		i;
	t_stack	*temp;

	if (!stack || *stack == NULL)
		return (0);
	temp = *stack;
	i = 0 ;
	if (temp->next == *stack)
		return (1);
	i++;
	while (temp->next != *stack)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	init_data(t_datastack *data)
{
	data->sa = 0;
	data->sb = 0;
	data->ss = 0;
	data->pa = 0;
	data->pb = 0;
	data->ra = 0;
	data->rb = 0;
	data->rr = 0;
	data->rra = 0;
	data->rrb = 0;
	data->rrr = 0;
	data->total = 0;
}

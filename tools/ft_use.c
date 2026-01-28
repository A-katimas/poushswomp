/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_use.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:12:32 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/28 16:32:21 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

t_stack	*lstnew(int content,t_datastack *data)
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

void	lstadd(t_stack **lst, t_stack *new)
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

void	lstsup(t_stack **lst, t_stack *sup)
{
	t_stack	*temp;
	t_stack	*point;

	temp = sup->next;
	point = sup->prev;
	if (!lst || *lst == NULL )
		return ;
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

int	lenlist(t_stack **stack)
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

void datainit(t_datastack *data)
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

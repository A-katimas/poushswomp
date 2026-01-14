/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_use.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:12:32 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 13:56:14 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

t_stack	*lstnew(int content)
{
	t_stack	*newlist;

	newlist = ft_calloc(1, sizeof(t_stack));
	if (newlist == NULL)
		return (NULL);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_use.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:12:32 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/07 18:21:29 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

T_stack	*lstnew(int content)
{
	T_stack	*newlist;

	newlist = ft_calloc(1, sizeof(T_stack));
	if (newlist == NULL)
		return (NULL);
	newlist->data = content;
	newlist->next = newlist;
	newlist->prev = newlist;
	return (newlist);
}
void	lstadd(T_stack **lst, T_stack *new)
{
	if (!lst || !new)
		return ;

	T_stack *temp = (*lst)->prev;

	temp->next = new;
	(*lst)->prev = new;
	new->prev=temp;
	new->next=*lst;

}

void lstsup(T_stack **lst, T_stack *sup)
{
	T_stack *temp;
	T_stack *point;

	temp = sup->next;
	point = sup->prev;
	if (!lst || *lst == NULL )
		return;
	if (sup == sup->next)
	{
		*lst = NULL;ft_printf("ici");
		return free(sup);
	}
	if (sup->prev == sup->next)
	{
		*lst = temp;
		(*lst)->next = *lst ;
		(*lst)->prev = *lst ;
		return(free(sup));
	}
	temp->prev = point;
	point->next = temp;
	if (*lst == sup )
		*lst = temp;
	free(sup);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:58 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/13 19:09:47 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

void	visualiseur(T_stack **a, T_stack **b)
{
	int i = 0;
	int sup = 0;
	T_stack *tempa = *a;
	T_stack *tempb;
	if (*b == NULL)
	{
		tempb = lstnew(0);
		sup ++;
	}
	else
		tempb = *b;

	if (*a == NULL)
	{
		tempa = lstnew(0);
		sup ++;
	}
	else
		tempa = *a;
	
	printf("\033[2J\033[H");
	ft_printf("\ttab1\t\t\t||\ttab2\n");
	while (i <= lenlist(a) || i <= lenlist(b))
	{
		ft_printf("%d\t",i);
		if (i <lenlist(a))
			ft_printf("%d",tempa->data);
		ft_printf("\t\t\t||\t");
		if (i <lenlist(b))
			ft_printf("%d",tempb->data);
		ft_printf("\n");
		
		i++;
		tempa=tempa->next;
		tempb=tempb->next;
	}
	
	if (sup != 0)
	lstsup(&tempb,tempb);
	ft_printf("taille a %d taille b %d\n\n",lenlist(a),lenlist(b));
	ft_printf("\n\n\n\n");

	usleep(100000);
	
}

void	printStack(T_stack **stack)
{
	T_stack *temp = *stack;

	ft_printf("\n\n\n");
	if (!(*stack)||!stack)
		return((void)ft_printf( "pu rien"));

	if (temp->next == *stack)
		return ((void)ft_printf("%d\n", temp->data));

	while (temp->next != *stack)
	{
		ft_printf("%d\n", temp->data);
		temp = temp->next;
		if (temp->next == *stack)
			ft_printf("%d\n", temp->data);
	}

}

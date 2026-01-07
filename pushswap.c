/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:58 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/07 18:10:14 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"



void	visualiseur(T_stack *a, T_stack *b)
{
	// int i = 0;
	system("clear");
	ft_printf("\ttab1\t\t\t||\ttab2\n");
	// while (a->data[i] != 0)
	// {
	// 	ft_printf("%i\t%d\t\t\t||\t%d\n",i,a->data[i],b->data[i]);
	// 	i++;
	// }
	ft_printf("size a %d\t\t\t||size b\t%d\n",a->size,b->size);

	usleep(500000);
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
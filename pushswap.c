/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:58 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/09 12:46:12 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

// void	visualiseur(t_stack **a, t_stack **b)
// {
// 	int		i;
// 	int		sup;
// 	t_stack	*tempa;
// 	t_stack	*tempb;

// 	tempa = *a;
// 	i = 0;
// 	sup = 0;
// 	if (*b == NULL)
// 	{
// 		tempb = list_new(0,tempa->datastack);
// 		sup ++;
// 	}
// 	else
// 		tempb = *b;
// 	if (*a == NULL)
// 	{
// 		tempa = list_new(0,tempb->datastack);
// 		sup ++;
// 	}
// 	else
// 		tempa = *a;
// 	// printf("\033[2J\033[H");
// 	// system("clear");
// 	ft_printf("\ttab1\t\t\t||\ttab2\n");
// 	while (i <= list_size(a) || i <= list_size(b))
// 	{
// 		ft_printf("%d\t",i);
// 		if (i <list_size(a))
// 			ft_printf("%d", tempa->data);
// 		ft_printf("\t\t\t||\t");
// 		if (i <list_size(b))
// 			ft_printf("%d", tempb->data);
// 		ft_printf("\n");
// 		i++;
// 		tempa = tempa->next;
// 		tempb = tempb->next;
// 	}
// 	if (sup != 0)
// 		del_node(&tempb, tempb);
// 	ft_printf("taille a %d taille b %d\n\n",list_size(a),list_size(b));
// 	ft_printf("\n\n\n\n");
// 	usleep(100000);
// }

// void	printStack(t_stack **stack)
// {
// 	t_stack	*temp = *stack;

// 	ft_printf("\n\n\n");
// 	if (!(*stack) || !stack)
// 		return ((void) ft_printf("pu rien"));
// 	if (temp->next == *stack)
// 		return ((void)ft_printf("%d\n", temp->data));
// 	while (temp->next != *stack)
// 	{
// 		ft_printf("%d\n", temp->data);
// 		temp = temp->next;
// 		if (temp->next == *stack)
// 			ft_printf("%d\n", temp->data);
// 	}
// }

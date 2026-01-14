/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublette.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:59:19 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 13:56:14 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"


void doublette(t_stack **a,t_stack **b)
{
	int j = lenlist(a)/2 ;
	// t_stack *spirituela = lstnew((*a)->data);
	// t_stack *top = *a;
	// t_stack *trier = *a;
	int i = j;
	while (lenlist(a) != i )
	{
		pb(a,b);
		// visualiseur(a,b);
	}
	// while (lenlist(a))
	// 	lstadd(&spirituela,lstnew(top->data));
	// while(j>=0)
	// {
	// 	i = findMinA(a);
	// 	while (top->data != i)
	// 	{
	// 		rra(a);
	// 		visualiseur(a,b);
	// 		down(&top);
	// 	}
	// 	rb(a);
	// 	up(&top);
	// 	up(&trier);
	// 	visualiseur(a,b);
	// 	j--;
	// }
	//int j = 0;
	//while (j != lenlist(b))
	//{
	//}
}



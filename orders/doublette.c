/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublette.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:59:19 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 16:59:06 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void chunk_sort(t_stack **a, t_stack **b)
{
	int j = lenlist(a)/2 ;
	// T_stack *spirituela = lstnew((*a)->data);
	// T_stack *top = *a;
	// T_stack *trier = *a;
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

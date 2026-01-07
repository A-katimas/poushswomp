/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubul.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:46:34 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/07 13:15:29 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"
#include "../pushswap.h"

void bubul(T_stack *a, T_stack *b)
{
	int i ;
	int j;

	j = 1;
	i = 0;
	visualiseur(a,b);
	while (a->size != 1)
	{
		// while(i != a->size)
		// {
		// 		if (!(a->data[0] < a->data[1]))
		// 		{
		// 			sa(a);
		// 			visualiseur(a,b);
		// 			j=0;
		// 		}
		// 		else
		// 		{
		// 			rra(a);
		// 			visualiseur(a,b);
		// 			j++;
		// 		}
		// 		i++;
		// }
		i = 0;
		if (j==0)
			rra(a);
		pb(a,b);
		visualiseur(a,b);
	}
	while (b->size != 0)
	{
		rb(b);
		visualiseur(a,b);
		pa(a,b);
		visualiseur(a,b);
	}
 
		visualiseur(a,b);
}

void test(T_stack *a, T_stack *b)
{
	int i = 0;
	int j = 1;

	while (i!= j)
	{
		pb(a,b);
		i++;
		visualiseur(a,b);
	}
	i=0;

// 	while (i!= j)
// 	{
// 		sa(a);
// 		i++;
// 		visualiseur(a,b);
// 	}
// i=0;
// 	while (i!= j)
// 	{
// 		sb(b);
// 		i++;
// 	visualiseur(a,b);
// 	}
// i=0;
// 	while (i!= j)
// 	{
// 		ss(a,b);
// 		i++;
// 		visualiseur(a,b);
// 	}
// 	i=0;

// 	while (i!= j)
// 	{
// 		rrr(a,b);
// 		i++;
// 		visualiseur(a,b);
// 	}
// i=0;
// 	while (i!= j)
// 	{
// 		rr(a,b);
// 		i++;
// 		visualiseur(a,b);
// 	}
// i=0;
// 	while (i!= j)
// 	{
// 		rra(a);
// 		i++;
// 		visualiseur(a,b);
// 	}
// i=0;
// 	while (i!= j)
// 	{
// 		rrb(b);
// 		i++;
// 		visualiseur(a,b);
// 	}
// i=0;
	while (i!= j+16)
	{
		ra(a);
		i++;
		visualiseur(a,b);
	}
// i=0;
// 	while (i!= j)
// 	{
// 		rb(b);
// 		i++;
// 		visualiseur(a,b);
// 	}
// i=0;
// 	while (i!= j)
// 	{
// 		pa(a,b);
// 		i++;
// 		visualiseur(a,b);
// 	}
// i=0;
}
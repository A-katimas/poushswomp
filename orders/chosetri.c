/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chosetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:26:32 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 14:05:23 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void	pushmaxa(t_stack **a, t_stack **b)
{
	t_stack	*top;
	int		i;

	top = *a ;
	while (lenlist(a) != 0)
	{
		i = findMinA(a);
		while (top->data != i)
		{
			rra(a);
			// visualiseur(a,b);
			down(&top);
		}
		pb(a, b);
		// visualiseur(a,b);
	}
	while (lenlist(b) != 0)
	{
		pa(a, b);
		// visualiseur(a,b);
	}
}

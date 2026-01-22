/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chosetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:26:32 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/22 19:11:42 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

void	chosetri(t_stack **a, t_stack **b)
{
	t_stack	*top;
	int		i;

	top = *a ;
	while (lenlist(a) != 0)
	{
		i = findmina(a);
		while (top->data != i)
		{
			rra(a);
			visualiseur(a, b);
			down(&top);
		}
		pb(a, b);
		visualiseur(a, b);
	}
	while (lenlist(b) != 0)
	{
		pa(a, b);
		visualiseur(a, b);
	}
}

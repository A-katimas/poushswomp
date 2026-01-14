/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:58:29 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 13:56:14 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"


int findMaxA(t_stack **a)
{
	int grand = (*a)->data;
	t_stack	*index =(*a)->next;
	while (index != (*a))
	{
		if (grand < index->data)
			grand = index->data;
		index = index->next;

	}

	return grand;
}

int findMinA(t_stack **a)
{
	int grand = (*a)->data;
	t_stack	*index =(*a)->next;
	while (index != (*a))
	{
		if (grand > index->data)
			grand = index->data;
		index = index->next;

	}
	return grand;
}
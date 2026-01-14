/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:58:29 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/14 16:56:35 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

int	findmaxa(t_stack **a)
{
	int		grand;
	t_stack	*index;

	grand = (*a)->data;
	index = (*a)->next;
	while (index != (*a))
	{
		if (grand < index->data)
			grand = index->data;
		index = index->next;
	}
	return (grand);
}

int	findmina(t_stack **a)
{
	int		grand;
	t_stack	*index;

	grand = (*a)->data;
	index = (*a)->next;
	while (index != (*a))
	{
		if (grand > index->data)
			grand = index->data;
		index = index->next;
	}
	return (grand);
}

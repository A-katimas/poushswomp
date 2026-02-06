/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:18:11 by aheno             #+#    #+#             */
/*   Updated: 2026/02/06 09:34:53 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

static int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= 46340 && i * i <= nb)
		i++;
	return (i - 1);
}

int	get_chunk_count(int size)
{
	int	count;

	if (size <= 0)
		return (0);
	count = ft_sqrt(size);
	if (count < 1)
		count = 1;
	return (count);
}

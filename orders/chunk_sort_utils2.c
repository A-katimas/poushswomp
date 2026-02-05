/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:18:11 by aheno             #+#    #+#             */
/*   Updated: 2026/02/05 16:03:25 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "order.h"

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (nb < 0)
	{
		return (1);
	}
	while (i <= 43460 && res < nb)
	{
		res = i * i;
		if (res == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	get_chunk_count(int size)
{
	if (size <= 10)
		return (1);
	if (size <= 100)
		return (5);
	if (size <= 500)
		return (11);
	return (15);
}

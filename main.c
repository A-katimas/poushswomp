/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/05 15:26:47 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int			i;
	int			flags;
	t_stack		*b;
	t_stack		*a;
	t_datastack	data;

	i = 1;
	flags = 0;
	if (ac <= 2)
		return (0);
	while (av[i][0] == '-' && av[i][1] == '-')
	{
		flags = get_flags(flags, &av[i][2]);
		i++;
	}
	if (ft_is_number(av[i]))
	{
		if (init(av, &a, &b, &data) == 0 || list_size(&a) == 1)
			return (0);
	}
	else
		return (ft_printfd(2, "Error\n"));
	what_i_do(flags, &a, &b);
	while (a)
		del_node(&a, a);
}

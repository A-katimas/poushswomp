/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 20:39:52 by jtardieu         ###   ########.fr       */
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
	if (init(av, &a, &b, &data) == 0 || list_size(&a) == 1)
		return (0);
	what_i_do(flags, &a, &b);
	while (a)
		del_node(&a, a);
}

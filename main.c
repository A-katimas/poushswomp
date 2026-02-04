/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 11:36:58 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int			i;
	int			want;
	t_stack		*b;
	t_stack		*a;
	t_datastack	data;

	i = 1;
	want = 0;
	if (ac == 1)
		return (0);
	while (av[i][0] == '-' && av[i][1] == '-')
	{
		want += commande(&av[i][2]);
		i++;
	}
	if (init(av, &a, &b, &data) == 0)
		return (0);
	whatiwant(want, &a, &b);
	while (a)
		nodesup(&a, a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/28 16:42:59 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>


int	main(int ac, char **av)
{
	int		i;
	int		want;
	float	disorder;
	t_stack	*b;
	t_stack	*a;
    t_datastack data;

	i = 1;
	want = -1;
	disorder = 0.00;
	if (ac < 1)
		return (0);
	if (av[i][0] == '-' && av[i][1] == '-')
	{
		want = commande(&av[1][2]);
		i++;
	}
    datainit(&data);
	a = lstnew(ft_atoi(av[i]),&data);
	b = NULL;
	while (++i != ac)
		lstadd(&a, lstnew(ft_atoi(av[i]),&data));
	disorder = compute_disorder(&a);
	ft_printf("\nlala%d%%\n", (int)(disorder * 100) - ((int)disorder * 100));
	whatiwant(want, disorder, &a, &b);
    ft_printf("rra = %d",a->datastack->total);
	while (a)
		lstsup(&a, a);

}



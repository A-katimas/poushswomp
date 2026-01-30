/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/30 12:12:57 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>


int init(char **entrer, t_stack **a, t_stack **b,t_datastack *data);

int	main(int ac, char **av)
{
	int		i;
	int		want;
	int		end;
	t_stack	*b;
	t_stack	*a;
    t_datastack data;

	i = 1;
	want = -1;
	if (ac < 1)
		return (0);
	while (av[i][0] == '-' && av[i][1] == '-')
	{
		want = commande(&av[1][2]);
		i++;
	}
    end = init(av, &a, &b,&data);
    if (end == 0)
        return (0);
    whahedo(want ,&a, &b);
	while (a)
        lstsup(&a, a);
}
int init(char **entrer, t_stack **a, t_stack **b, t_datastack *data)
{
    int i;

    i = 1;
    while (entrer[i][0] == '-' && entrer[i][1] == '-')
        i++;
    datainit(data);
	*a = lstnew(ft_atoi(entrer[i]),data);
	*b = NULL;
	while (entrer[i])
	{
        if (ft_findisnum(entrer[i]))
        {
            lstadd(a, lstnew(ft_atoi(entrer[i]),data));
        }
        else
        {
            ft_printf("Error\n");
        	while (a)
                lstsup(a, *a);
            return 0;
        }
        i++;
    }
    return 1;
}




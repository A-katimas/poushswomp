/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/28 19:14:11 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

void print_bench(t_stack *list,float disorder,char *strategy );
int init_stack(int nbenter, char **entrer ,int i, t_stack **a, t_stack **b, t_datastack *data);


int	main(int ac, char **av)
{
	int		i;
	int		want;
	float	disorder;
    int end;
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
    end = init_stack(ac,av,i,&a,&b,&data);
    if (end == 0){
        return 0;}
	disorder = compute_disorder(&a);
	whatiwant(want, disorder, &a, &b);
    print_bench(a,disorder,"chien");
	while (a)
		lstsup(&a, a);
}
int init_stack(int nbenter, char **entrer ,int i, t_stack **a, t_stack **b, t_datastack *data)
{
    datainit(data);
	*a = lstnew(ft_atoi(entrer[i]),data);
	*b = NULL;
	while (++i != nbenter)
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
    }
    return 1;
}

void print_bench(t_stack *list,float disorder,char *strategy)
{

    ft_printf("BenchMarck\n");
    ft_printf("_________________________________\n");
    ft_printf("|                               |\n");
    ft_printf("|disorder: %d%%         \t\t|\n", (int)(disorder * 100) - ((int)disorder * 100));
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|stratergy: %s      \t|\n",strategy);
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|total_ops: %d              \t|\n",list->datastack->total);
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|sa: %d  | ra: %d  | pa: %d \t|\n",list->datastack->sa,list->datastack->ra,list->datastack->pa);
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|sb: %d  | rb: %d  | pb: %d \t|\n",list->datastack->sb,list->datastack->rb,list->datastack->pb);
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|rra: %d | rrb: %d | ss: %d \t|\n",list->datastack->sb,list->datastack->rb,list->datastack->pb);
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|          \x1B[31mtotal: %d \x1B[0m        \t|\n",list->datastack->total);
    ft_printf("|_______________________________|\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   benchmarck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:05:09 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/30 12:05:49 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

void whahedo(int want ,t_stack **a, t_stack **b)
{
    float disorder ;

    disorder = compute_disorder(a);
    whatiwant(want, a, b);
    print_bench(a, disorder, what_strategy(want, a));
}

char *what_strategy(int want, t_stack **a)
{
    int	size;

	size = lenlist(a);
	if (size <= 3 && size > 1 )
		return ("\x1B[34msort_three\x1B[0m");
	if (want == -1)
		return("\x1B[32madaptative\x1B[0m");
	if (want == 1)
		return("chosetri");
	if (want == 2)
		return("chunk_sort");
	if (want == 3)
		return("radix_lsd");
    return("jysaispas");
}

void print_bench(t_stack **list,float disorder,char *strategy)
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
    ft_printf("|total_ops: %d              \t|\n",(*list)->datastack->total);
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|sa: %d  | ra: %d  | pa: %d \t|\n",(*list)->datastack->sa,(*list)->datastack->ra,(*list)->datastack->pa);
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|sb: %d  | rb: %d  | pb: %d \t|\n",(*list)->datastack->sb,(*list)->datastack->rb,(*list)->datastack->pb);
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|rra: %d | rrb: %d | ss: %d \t|\n",(*list)->datastack->sb,(*list)->datastack->rb,(*list)->datastack->ss);
    ft_printf("|_______________________________|\n");
    ft_printf("|                               |\n");
    ft_printf("|          \x1B[31mtotal: %d \x1B[0m        \t|\n",(*list)->datastack->total);
    ft_printf("|_______________________________|\n");
}
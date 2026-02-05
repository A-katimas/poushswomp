/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   benchmarck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheno <aheno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:05:09 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/05 16:39:21 by aheno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_utils.h"

char	*get_strategy(int want, t_stack **a) // pas bon nom, get_strategy
{
	int	size;

	size = list_size(a);
	if (size <= 3 && size >= 1)
		return ("\x1B[34msort_three\x1B[0m");
	if (want == 1 || want == 0)
		return ("\x1B[36madaptative\x1B[0m");
	if (want == 2)
		return ("\x1B[32mchosetri O(n²))\x1B[0m");
	if (want == 3)
		return ("\x1B[33mchunk_sort O(n√n)\x1B[0m");
	if (want == 4)
		return ("\x1B[35mradix_lsb O(nlogn)\x1B[0m");
	return ("\x1B[31mError    \x1B[0m");
}

void	print_bench(t_stack **list, float disorder, char *strategy)
{
	ft_printfd(2, "BenchMarck\n");
	ft_printfd(2, "_________________________________\n");
	ft_printfd(2, "|                               |\n");
	ft_printfd(2, "|disorder: %d.%d%%   \t\t|\n",
		(int)(disorder * 100), (int)(disorder * 10000) % 100);
	ft_printfd(2, "|_______________________________|\n");
	ft_printfd(2, "|                               |\n");
	ft_printfd(2, "|strategy: %s      \t|\n", strategy);
	ft_printfd(2, "|_______________________________|\n");
	ft_printfd(2, "|                               |\n");
	ft_printfd(2, "|total_ops: %d          \t|\n", (*list)->datastack->total);
	ft_printfd(2, "|_______________________________|\n");
	ft_printfd(2, "|                               |\n");
	ft_printfd(2, "|sa: %d  | ra: %d  | pa: %d \t|\n", (*list)->datastack->sa,
		(*list)->datastack->ra, (*list)->datastack->pa);
	ft_printfd(2, "|                               |\n");
	ft_printfd(2, "|sb: %d  | rb: %d  | pb: %d \t|\n", (*list)->datastack->sb,
		(*list)->datastack->rb, (*list)->datastack->pb);
	ft_printfd(2, "|                               |\n");
	ft_printfd(2, "|rra: %d | rrb: %d | ss: %d \t|\n", (*list)->datastack->rra,
		(*list)->datastack->rb, (*list)->datastack->ss);
	ft_printfd(2, "|_______________________________|\n");
	ft_printfd(2, "|                               |\n");
	ft_printfd(2, "|\t\x1B[31mtotal:%d\x1B[0m\t\t|", (*list)->datastack->total);
	ft_printfd(2, "\n|_______________________________|\n");
}

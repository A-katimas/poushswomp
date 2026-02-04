/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   benchmarck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:05:09 by jtardieu          #+#    #+#             */
/*   Updated: 2026/02/04 12:11:24 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolsswap.h"

char	*what_strategy(int want, t_stack **a)
{
	int	size;

	size = lenlist(a);
	if (size <= 3 && size >= 1)
		return ("\x1B[34msort_three\x1B[0m");
	if (want == 0)
		return ("\x1B[36madaptative\x1B[0m");
	if (want == 1)
		return ("\x1B[32mchosetri\x1B[0m");
	if (want == 2)
		return ("\x1B[33mchunk_sort\x1B[0m");
	if (want == 4)
		return ("\x1B[35mradix_lsd\x1B[0m");
	return ("\x1B[31mError    \x1B[0m");
}

void	print_bench(t_stack **list, float disorder, char *strategy)
{
	ft_printfd(2, "BenchMarck\n");
	ft_printfd(2, "_________________________________\n");
	ft_printfd(2, "|                               |\n");
	ft_printfd(2, "|disorder: %d%% \t\t\t|\n",
		(int)(disorder * 100) - ((int)disorder * 100));
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
	ft_printfd(2, "|rra: %d | rrb: %d | ss: %d \t|\n", (*list)->datastack->sb,
		(*list)->datastack->rb, (*list)->datastack->ss);
	ft_printfd(2, "|_______________________________|\n");
	ft_printfd(2, "|                               |\n");
	ft_printfd(2, "|\t\x1B[31mtotal:%d\x1B[0m\t\t|", (*list)->datastack->total);
	ft_printfd(2, "\n|_______________________________|\n");
}

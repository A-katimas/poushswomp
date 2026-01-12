/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/12 18:11:58 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int ac , char **av)
{
	int i = 1;

	if (ac < 1 )
		return 0;
	T_stack *a = lstnew(ft_atoi(av[i]));
	T_stack *b;

	 b = NULL;
	i++;
	
	while (i != ac)
	{
		lstadd(&a,lstnew(ft_atoi(av[i])));
		i++;
	}

	//bubul(&a,&b);
	doublette(&a,&b);
	while(a)
	{
		lstsup(&a,a);
	}

}



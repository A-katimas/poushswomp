/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:08:45 by jtardieu          #+#    #+#             */
/*   Updated: 2026/01/13 18:32:11 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

int adaptative(T_stack **stack);
int commande(char *what);

int main(int ac , char **av)
{
	int i = 1;
	int want = -1;
	float disorder = 0.00;
	if (ac < 1 )
		return 0;
	if (av[i][0] == '-' && av[i][1] == '-')
	{
		want= commande(&av[1][2]);
		i++;
	}
	T_stack *a = lstnew(ft_atoi(av[i]));
	T_stack *b;
	b = NULL;

	i++;
	while (i != ac)
	{
		lstadd(&a,lstnew(ft_atoi(av[i])));
		i++;
	}
	disorder = compute_disorder(&a);

	ft_printf("\nlala%d%%\n", (int)(disorder * 100) - ((int)disorder * 100));
	if (want == -1)
		want = adaptative(&a);

	if (want == 1)
		bubul(&a,&b);
	if (want == 2)
		pushMaxA(&a,&b);
	else
		doublette(&a,&b);


	while(a)
	{
		lstsup(&a,a);
	}
	if (av[1][0] == '-' && av[1][1] == '-')
	{
		want= commande(&av[1][2]);
		i++;
	}
	ft_printf("%d",want);

}

int commande(char *what)
{
	if (!ft_strncmp(what,"simple",6))
		return 1;
	if (!ft_strncmp(what,"complex",6))
		return 2;
	else
		return 0;
}

int adaptative(T_stack **stack)
{
	if (!stack)
		ft_printf("la");
	return 2;
}

float compute_disorder(T_stack **stack)
{
	T_stack *i = *stack;
	T_stack *j = (*stack)->next;

	float mistakes = 0.00;
	float total_pairs = 0.00 ;
	while (i != *stack || total_pairs == 0)
	{
		while (j!=*stack)
		{
			total_pairs +=1;
			if (i->data > j->data)
				mistakes +=1;
			j=j->next;
		}
		i=i->next;
		j=i->next;
	}
	return (mistakes / total_pairs);
}

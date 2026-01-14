#include "pushswap.h"

int commande(char *what)
{
	if (!ft_strncmp(what,"simple",6))
		return 1;
	if (!ft_strncmp(what,"complex",6))
		return 2;
	else
		return 0;
}

void	whatiwant(int want, float disorder, T_stack **a, T_stack **b)
{
	if (want == -1)
		want = adaptative(a, b, disorder);
	if (want == 1)
		bubul(a,b);
	if (want == 2)
		pushMaxA(a,b);
	else
		doublette(a,b);
}

int	adaptative(T_stack **a, T_stack **b, float disorder)
{
	if (disorder < 0.2)
		bubul(a, b);
	else if (disorder < 0.5)
		pushMaxA(a, b);
	else
		doublette(a, b);
	return (-1);
}

float	compute_disorder(T_stack **stack)
{
	T_stack	*i;
	T_stack	*j;

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

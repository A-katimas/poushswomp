#include "order.h"

void pushMaxA(T_stack **a,T_stack **b)
{
	T_stack *top = *a ;
	int i;
	while(lenlist(a)!=0)
	{
		i = findMinA(a);
		ft_printf("%d\n",i);
		while (top->data != i)
		{
			rra(a);
			visualiseur(a,b);
			down(&top);
		}
		pb(a,b);
		visualiseur(a,b);
	}
	while(lenlist(b)!=0)
	{
		pa(a,b);
		visualiseur(a,b);
	}
}
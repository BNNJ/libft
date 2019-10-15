#include "qsort.h"

t_qnode stack[STACK_SIZE];
t_qnode	*top = stack;

void	qpush(char *low, char *high)
{
	top->lo = low;
	top->hi = high;
	++top;
}

void	qpop(char **low, char **high)
{
	--top;
	*low = top->lo;
	*high = top->hi;
}

void	qswap(char *a, char *b, size_t s)
{
	char	tmp;
	size_t	i;

	i = 0;
	while (i < s)
	{
		tmp = *a;
		*a++ = *b;
		*b++ = tmp;
		++i;
	}
}

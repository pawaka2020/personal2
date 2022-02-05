#include "ft_printf.h"
//simply print 0 if number given is less than 0
void	ft_printunsint(long i, int *strlen)
{
	if (i > 0)
		ft_printint(i, strlen);
	else
		ft_printint(0, strlen);
}

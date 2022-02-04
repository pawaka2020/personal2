#include "ft_printf.h"

/*
i is long given by %x, but converted to unsigned int
strlen is the int result of ft_printf
*/
void	ft_printhexa(unsigned int i, int *strlen)
{
	if (i >= 4294967295)
		ft_printstr("ffffffff", strlen);
	else
		ft_putnbr_base(i, "0123456789abcdef", strlen);                                         
}
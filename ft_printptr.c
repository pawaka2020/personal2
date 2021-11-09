#include "ft_printf.h"

void	ft_printptr(void *ptr, int *strlen)
{
	unsigned long	ptr2;

	ptr2 = (unsigned long)ptr;
	if (ptr2 == 0)
		ft_printstr("0x0", strlen);
	else
	{
		*strlen += write(1, "0x", 2);
		ft_putnbr_base(ptr2, "0123456789abcdef", strlen);
	}
}

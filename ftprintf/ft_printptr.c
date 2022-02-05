#include "ft_printf.h"
//ptr is from va_arg(arg, void *)
//pass ptr as long to ptr2
//to get address, write "0x", then attach hexa-converted value of ptr2
void	ft_printptr(unsigned long ptr, int *strlen)
{
	if (ptr == 0)
		ft_printstr("(nil)", strlen);
	else
	{
		ft_printstr("0x", strlen);
		ft_putnbr_base(ptr, "0123456789abcdef", strlen);
	}
}

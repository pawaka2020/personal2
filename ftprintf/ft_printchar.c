#include "ft_printf.h"

// int	ft_putchar(char c)
// {
// 	return (write(1, &c, 1));
// }

void	ft_printchar(int i, int *strlen)
{
	//*strlen += ft_putchar(i);
	*strlen += write(1, &i, 1);
}
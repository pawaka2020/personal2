#include "ft_printf.h"

void	ft_printstr(char *str, int *strlen)
{
	if (str == 0)
		str = "(null)";
	*strlen += write(1, str, ft_strlen2(str));
}

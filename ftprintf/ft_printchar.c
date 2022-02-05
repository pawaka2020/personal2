#include "ft_printf.h"

void	ft_printchar(int i, int *strlen)
{
	*strlen += write(1, &i, 1);
}
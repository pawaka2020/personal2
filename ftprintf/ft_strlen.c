#include "ft_printf.h"

int	ft_strlen2(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

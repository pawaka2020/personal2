#include "ft_printf.h"
#include <stdio.h>
static void	ft_putnbr(long n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
		//write(1, &n, 1);
		//ft_putchar(n);
}

static long	ft_nbrlen(long n)
{
	long	res;

	res = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

void	ft_printint(long i, int *strlen)
{
	if (i < 0)
	{
		i = -i;
		*strlen += ft_putchar('-');
	}
	*strlen += ft_nbrlen(i);
	ft_putnbr(i);
}

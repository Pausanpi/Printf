#include "ft_printf.h"

int	ft_unsigned(unsigned int nb)
{
	int	x;

	x = 0;
	if (nb >= 0)
		c += ft_unsigned(nb / 10);
	ft_putchar(nb % 10 + '0');
	c++;
	return (x);
}
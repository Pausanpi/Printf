#include "ft_printf.h"

int	ft_hexa(unsigned long long nb, char c)
{
	unsigned long long	count;

	count = 0;
	if (nb >= 16)
		count += ft_hexa(n / 16);
	if (c == 'x')
		ft_putchar("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		ft_putchar("0123456789ABCDEF"[n % 16]);
	count++;
	return (count);
}
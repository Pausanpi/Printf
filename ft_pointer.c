#include "ft_printf.h"

int	ft_pointer(unsigned long long ptr)
{
	int	x;

	x = 0;
	c += ft_string("0x");
	c += ft_hexa(ptr, 'x');
	return (c);
}
#include "ft_printf.h"

static int	ft_conver(char const *content, int x, va_list *args)
{
	int count;

	count = 0;
	if (content[x] == 'c')
		count += ft_putchar(va_arg(*args, int));
	if (content[x] == 's')
		count += ft_string(va_arg(*args, char *));
	if (content[x] == 'p')
		count += ft_pointer(va_arg(*args, unsigned long long));
	if (content[x] == 'd')
		count += ft_decimal(va_arg(*args, int));
	if (content[x] == 'i')
		count += ft_decimal(va_arg(*args, int));
	if (content[x] == 'u')
		count += ft_unsigned(va_arg(*args, unsigned int));
	if (content[x] == 'x')
		count += ft_hexa(va_arg(*args, unsigned long long), 'x');
	if (content[x] == 'X')
		count += ft_hexa(va_arg(*args, unsigned long long), 'X');
	if (content[x] == '%')
		count += ft_putchar('%');

	return (count);
}

int	ft_printf(char const *content, ...)
{
	va_list args;
	int		x;
	int		pos;

	x = 0;
	pos = 0;
	va_start(args, content);
	while(content[x])
	{
		if (content[x] != '%')
			pos += ft_putchar(content[x]);
		else
		{
			//tengo que ver el siguiente caracter para saber que conversión tengo que hacer
			x++;
			//conversión
			c += ft_conver(content, x, &args);
		}
		x++;
	}
	va_end(args);
	return (pos);
}
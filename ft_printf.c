#include "ft_printf.h"

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
		}
		x++;
	}
	va_end(args);
	return (pos);
}
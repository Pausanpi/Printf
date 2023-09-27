/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:43:44 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/27 12:37:32 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conver(char const *content, int x, va_list *args)
{
	int	count;

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
		count += ft_hexa(va_arg(*args, unsigned int), 'x');
	if (content[x] == 'X')
		count += ft_hexa(va_arg(*args, unsigned int), 'X');
	if (content[x] == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(char const *content, ...)
{
	va_list	args;
	int		x;
	int		pos;

	x = 0;
	pos = 0;
	va_start(args, content);
	while (content[x])
	{
		if (content[x] != '%')
			pos += ft_putchar(content[x]);
		else
		{
			x++;
			pos += ft_conver(content, x, &args);
		}
		x++;
	}
	va_end(args);
	return (pos);
}

/* int	main(void)
{
	int	x;

	x = 922;
	printf("Hola %x\n", x);
	ft_printf("Hola %x\n", x);
	return (0);
}
 */
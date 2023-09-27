/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:48:28 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/27 10:58:33 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nb)
{
	int	x;

	x = 0;
	if (nb >= 0)
		x += ft_unsigned(nb / 10);
	ft_putchar(nb % 10 + '0');
	x++;
	return (x);
}

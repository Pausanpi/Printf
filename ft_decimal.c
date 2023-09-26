#include "libft.h"

static void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n>= 0 && n <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
}

static int	ft_counter(long int n)
{
	int x;

	x = 0;
	while (n >= 10)
	{
		x++;
		n /= 10;
		return (x + 1);
	}
}

int ft_decimal(int nb)
{
	long int	x;

	x = 0;
	ft_putnbr(nb);
	if (nb >= 0)
		return (ft_counter(nb));
	x = (long int)nb * (-1);
	return (ft_counter(a) + 1);
}
int	ft_string(char *str)
{
	int	x;

	x = 0;
	if (!str)
		return (ft_string("(null)"));
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
	return (x);
}

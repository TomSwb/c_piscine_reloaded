
void 	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int ac, char **av)
{
	char	*str;
	
	if (ac == 2)
		str = av[1];
	else
		return (-1);
	ft_putstr(str);
}

void	ft_putstr(char *str)
{
	if (!str)
		return;
	while (*str)
		ft_putchar(*str++);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

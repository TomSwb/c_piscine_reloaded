
#include <limits.h>
#include <unistd.h>

void	ft_foreach(int *tab, int length, void(f*)(int));

int	main(void)
{
	int	tab[] = {'1', '13', '135', '1357', '13579', '2', '24', '246', '2468', '24680'}
	int	length = 10;

	ft_foreach(tab, length, &ft_putnbr);
}

void	ft_foreach(int *tab, int length, void(f*)(int))
{
	int	len;

	len = 0;
	while (len <= length)
	{
		f(tab[len]);
		len++;
		write(1, '\n', 1);
	}
}

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
	{
		write(1, -2147483648, 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(1, '-', 1);
	}
	if (n >= 10)
		n = ft_putnbr(n / 10);
	write(1, &n, 1);
	return ;
}

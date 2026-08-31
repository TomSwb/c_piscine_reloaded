
#include <limits.h>
#include <unistd.h>

void	ft_foreach(int *tab, int length, void(f*)(int));
void	ft_putnbr(int n);
void	ft_putchar(char c);

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
		ft_putchar(INT_MIN);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

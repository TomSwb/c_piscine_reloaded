#include <unistd.h>
 
void	ft_putchar(char c);
 
int	main(int ac, char **av)
{
	int	i;
	int	j;
 
	i = 1;
	if (ac < 2)
		return (-1);
	else
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				ft_putchar(av[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}


#include <string.h>
#include <stdio.h>


int	ft_strlen(char *str);

int	main(int ac, char **av)
{
	char	*str;

	if (ac == 2)
		str = av[1];
	else
		return (-1);
	printf("ft: %d\n", ft_strlen(str));
	printf("og: %zu", strlen(str));
}

int	ft_strlen(char *str)
{
	int	count;

	if (!str)
		return (-1);
	count = 0;
	while (str[count])
		count++;
	return (count);
}

/**
* @author TomSwb

* @version 0.1
* @date 2026-08-30
*/

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int max;
	int	*result;
	int	i;
	int	range;

	i = 0;
	min = -4;
	max = -2;
	range = max - min;
	result = ft_range(min, max);
	if (!result)
		return (-1);
	while (i < range)
	{
		printf("%d = %d\n", i, result[i]);
		i++;
	}
	free(result);
}

int	*ft_range(int min, int max)
{
	int	*result;
	int	range;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	result = malloc(sizeof(int) * range);
	if (!result)
		return (NULL);
	i = 0;
	while (i < range)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
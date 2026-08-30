/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 21:09:40 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/30 21:10:00 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

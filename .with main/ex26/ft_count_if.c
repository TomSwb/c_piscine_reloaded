/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 15:23:19 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/31 15:23:22 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *));
int	ft_strchr(char *);

int	main(int ac, char **av)
{
	(void) ac;
	printf("%d", ft_count_if(av, ft_strchr));
}


int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

int	ft_strchr(char *s)
{
	char	c;

	c = 'a';
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 16:26:56 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/27 16:44:33 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("%d", ft_sqrt(25));
}

int	ft_sqrt(int nb)
{
	int	root;
	
	root = 1;
	if (nb <= 0)
		return (0);
	while (root * root < nb)
	{
		if (root >= 46341)
			return (0);
		root++;
	}
	if (root * root == nb)
		return (root);
	return (0);
}

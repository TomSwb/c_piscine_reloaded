/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 21:44:50 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/26 21:56:40 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;
	
	i = 48;
	while (i < 58)
	{
		ft_putchar(i);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
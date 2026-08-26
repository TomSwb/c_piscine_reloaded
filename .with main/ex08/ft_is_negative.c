/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 21:47:22 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/26 21:52:02 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);
void	ft_putchar(char c);

int	main(void)
{
	ft_is_negative(-1536);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
	 	ft_putchar('N');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
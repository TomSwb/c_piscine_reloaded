/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 15:16:38 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/31 15:21:22 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int n);

int	main(void)
{
	int	tab[] = {1, -13, 135, -1357, 13579, 2, 24, 246, -2468, 24680, -2147483648, 2147483647};
	int	length = 12;

	ft_foreach(tab, length, &ft_putnbr);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	len;

	len = 0;
	while (len < length)
	{
		f(tab[len]);
		len++;
		write(1, "\n", 1);
	}
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	n += 48;
	write(1, &n, 1);
}

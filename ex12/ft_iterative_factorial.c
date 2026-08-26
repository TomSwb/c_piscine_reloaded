/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 22:29:38 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/26 22:49:32 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (n < 0)
		return (0);
	while (i <= n)
	{
		if (res > 2147483647 / i)
			return (0);
		res = res * i;
		i++;
	}
	return (res);
}
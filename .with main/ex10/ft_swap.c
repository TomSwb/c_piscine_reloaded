/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 22:03:50 by tomswb            #+#    #+#             */
/*   Updated: 2026/08/26 22:12:28 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a = 10;
	int	b = 5;

	printf("Before: a: %d - b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("After: a: %d - b: %d", a, b);
}

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
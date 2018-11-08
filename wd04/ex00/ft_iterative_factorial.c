/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 12:51:22 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/21 12:46:25 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main()
{
	int p;
	int b;

	p = -4;
	ft_iterative_factorial(p);
	b = ft_iterative_factorial(p);
	printf("%d", b);
	return (0);
}

int ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	fact = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return 0;
	if (nb == 0)
		return 1;
	while (nb >= i)
	{
		fact *= i;
		i++;
	}
	return (fact);
}

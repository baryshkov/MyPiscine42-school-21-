/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 18:06:09 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/21 14:47:21 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main (void)
{
	int i;
	i = ft_recursive_power(5, 0);
	printf("%d", i);
}

int ft_recursive_power(int nb, int power)
{
	int c;
	int temp;
	if (power <  0)
		return (0);
	if (power == 1 || nb == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

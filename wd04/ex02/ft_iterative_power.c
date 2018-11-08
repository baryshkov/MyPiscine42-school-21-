/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:00:14 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/21 12:50:09 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int main(void)
{
	int i;
	i = ft_iterative_power(2, 1);
	printf("%d", i);
}

int ft_iterative_power(int nb, int power)
{
	int i;
	int temp;

	i = 0;
	temp = 1;
	if (power < 0)
		return (0);
	if (power == 1 || nb == 1)
		return (nb);
	while (i < power)
	{
		temp*=nb;
		i++;
	}
	return (temp);
}

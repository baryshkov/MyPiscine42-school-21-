/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 11:17:09 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/24 11:05:46 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int index;
	int sign;
	int val;

	sign = 1;
	val = 0;
	index = 0;
	if (str[0] == '\0')
		return (0);
	while (str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
		{
			sign = -sign;
		}
		index++;
	}
	while ((str[index] >= '0') && (str[index] <= '9'))
	{
		val = val * 10 + str[index] - '0';
		index++;
	}
	return (val * sign);
}

int	main(void)
{
	int a;
	a = ft_atoi("    ++2893");
	printf("%d", a);
}



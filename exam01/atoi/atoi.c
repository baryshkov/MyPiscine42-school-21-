/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:28:01 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/01 19:58:49 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int j;
	int sign;
	const char *new;

	i = 0;
	j = 0;
	sign = 1;

	if (str[i] == '\0')
		return (0);

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
	{
		i++;		
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		} i++; }
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		j = j * 10 +str[i] - '0';
		i++;
	}
	j = j * sign;
	return (j);
}

int main (void)
{
	printf("%d", ft_atoi("   +23148"));
	return (0);
}

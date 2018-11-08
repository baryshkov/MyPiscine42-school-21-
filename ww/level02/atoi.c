/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:19:58 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/05 18:50:16 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;
	res = 0;

	sign = 1;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		if (str[i+1] == '+' || str[i+1] == '-')
			return(0);
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res*sign);

}
int main(void)
{
	printf("%d\n", ft_atoi("   kakakk"));
	printf("%d\n", atoi("  kakka"));
	return(0);
}

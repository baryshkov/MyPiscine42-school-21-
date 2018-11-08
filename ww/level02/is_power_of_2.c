/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 17:41:55 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/04 17:52:49 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		is_power_of_2(unsigned int n)
{
	int i;
	
	i = 1;
	while(i < n)
	{
		i = i*2;
	}
	printf("%d sf\n", i);
	if (i == n)
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	printf("\n%d", is_power_of_2(16));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:26:51 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/07 19:46:54 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int		lcm(unsigned int a, unsigned int b)
{
	int i;
	int f;
	unsigned int minM;
	unsigned int newb;

	f = 1;
	i = 1;
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
	{
		minM = a;
	}
	else
	{
		minM = b;
	}
	while (f == 1)
	{
		if((minM % a == 0) && (minM % b == 0))
			return(minM);
		minM++;
	}
	return (0);
}
int main(int argc, char **ad)
{
	printf("%d", lcm(24, 60));
}

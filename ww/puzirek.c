/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzirek.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 12:36:51 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/04 13:04:29 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#define SIZE 10

int main (void)
{
	int a[SIZE] = {2, 4, 6, 8, 86, 666, 1, 5, 43, 42};
	int i;
	int swap;
	int f;

	i = 0;
	swap = 0;
	f = 1;

	printf("Not sorted array\n");
	while (i <= SIZE - 1)
	{
		printf("%4d", a[i]);
		i++;
	}
	i = 0;
	while (f != 0)
	{
		f = 0;
		i = 0;
		while (i <= SIZE -2)
		{
			if (a[i] > a[i+1])
			{
				swap = a[i+1];
				a[i+1] = a[i];
				a[i] = swap;
				f+= 1;
			}
			i++;	
		}
	}
	i = 0;
	printf("\nsorted one \n");
	while (i <= SIZE - 1)
	{
		printf("%4d", a[i]);
		i++;
	}
	return (0);
}

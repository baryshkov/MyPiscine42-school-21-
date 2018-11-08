/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:54:21 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/06 18:03:16 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		max(int *tab, unsigned int len)
{
	int n;
	
	n = 0;
	if (len == 0)
		return(0);
	n = tab[0];
	while(len--)
	{
		if(tab[len] > n)
		{
			n = tab[len];
		}
	}
	return(n);
}
int main(void)
{
	unsigned int k = 20;
	int a[20] = {34, 53, 1, 2, 6, 43, 67, 87, 0, 45, 2, 77, 88, 34, 15, 16, 17, 18, 19, 20};
	printf("%d", max(a, k));
	return (0);
}

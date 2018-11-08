/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:43:37 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/30 18:51:17 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		max(int *tab, unsigned int len)
{
	int i;
	int max;

	i = 0;
	max = tab[i];
	while (len--)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main (void)
{
	int tab[] = {21, 2, 32, 20, 3, 5, 42};
	unsigned int len = 7;
	printf("%d", max(tab, len));
	return (0);
}

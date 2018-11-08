/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:53:25 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/25 19:29:17 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *l;
	l = ft_range(0, 0);
}

int		*ft_range(int min, int max)
{
	int j;
	int k;
	int i;
	int *dest;

	j = 1;
	i = 0;
	k = min + 1;
	if (min > max || min == max)
		return (NULL);
	while (k < max)
	{
		k++;
		j++;
	}
	dest = (int*)malloc(j * sizeof *dest);
	while (j > 0)
	{
		dest[i] = min + i;
		j--;
		i++;
	}
	return (dest);
}

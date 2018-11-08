/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:53:25 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/25 17:04:18 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *l;
	l = ft_range(5, 10);
}

int		*ft_range(int min, int max)
{
	int i;
	int *dest;

	i = 0;
	if (min > max || min == max)
		return (NULL);
	dest = (int*)malloc((max - min) * sizeof *dest);
	while (i < max - min)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}

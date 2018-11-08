/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:32:37 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/25 17:18:46 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *dst;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dst = (int*)malloc((max-min)*sizeof(*dst));
	while (i < max - min)
	{
		dst[i] = min + i;
		i++;
	}
	*range = dst;
	return (max - min);
}

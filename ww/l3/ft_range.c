/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:12:34 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/07 16:15:25 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		*ft_range(int start, int end)
{
	int i;
	int *dest;
	i = 0;
	if(start > end)
	{
		dest = (int*)malloc(sizeof (int)*(start - end) +1);
	}
	else if (end > start)
	{
		dest = (int*)malloc(sizeof(int)*(end - start) +1);
	}
	while(start < end)
	{
		dest[i] = start;
		i++;
		if(start > end)
			start--;
		if (start < end)
			start++;
	}
	dest[i] = start;
	return(dest);
}

int main(void)
{
	int *l;
	l = ft_range(5, 10); 
}

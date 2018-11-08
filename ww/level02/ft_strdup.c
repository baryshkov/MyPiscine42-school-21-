/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 17:53:17 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/05 20:31:41 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int i;
	int k;
	char *dst;
	int swap;

	swap = 0;
	i = 0;	
	while (src[i] != '\0')
	{
		i++;
	}
	dst = malloc(sizeof(char) *(i+1));
	i = 0;
	if (dst != ((char*)0))
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	return(dst);
	}
	else
	return(0);
}
int		main(void)
{
	char buf[10] = "";
	char bxf[10] = "asdfg1";
	printf("%s\n", ft_strdup(bxf));
	printf("%s\n", strdup(bxf));
	return(0);
}

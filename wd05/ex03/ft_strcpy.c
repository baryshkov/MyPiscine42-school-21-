/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:33:42 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/23 18:51:28 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char		*ft_strcpy(char *dest, char *src);

int			main (void)
{
	char str1[100] = "hello";
	char str2[100] = "lki1l";

	ft_strcpy(str2, str1);
	printf("%s\n", str2);
}

char		*ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

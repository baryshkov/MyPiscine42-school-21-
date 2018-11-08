/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:34:17 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/23 15:02:04 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char		*ft_strncpy(char *dest, char *src, unsigned int n);

int			main(void)
{
    char str1[100] = "111111111111111";
    char str2[100] = "LAlalal";

    ft_strncpy(str2, str1, 1);
    printf("%s\n", str2);
}

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
    return (dest);
}

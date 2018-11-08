/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:30:44 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/24 19:54:49 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char s[50];
	char d[50];
	char d2[50]

	s[50] = "123 456 789 0 1 2 3 4 5 6";
	strdup(s[50]
	ft_strcpy(
}

char	*ft_strdup(char *src)
{
	char *dest;
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	*dest = malloc(i+1);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


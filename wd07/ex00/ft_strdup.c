/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:30:44 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/26 12:44:15 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char s[] = "123 123 123";
	char *d;  
	char *d2;

	d = strdup(s);
	d2 = ft_strdup(s);

}

char	*ft_strdup(char *src)
{
	char *dest;
	int i;
	int t;

	i = 0;
	t = 0;
	if (src == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char*)malloc(i+1);
	while (src[t] != '\0')
	{
		dest[t] = src[t];
		t++;
	}
	dest[i] = '\0';
	return (dest);
}

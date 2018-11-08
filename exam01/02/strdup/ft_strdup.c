/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 10:43:40 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/02 11:01:37 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int i;
	char *new;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	new = malloc(sizeof(char) *(i+1));
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int main (void)
{
	char s[4] = "abc";
	char d[50];
	ft_strdup(s);
	return(0);
}

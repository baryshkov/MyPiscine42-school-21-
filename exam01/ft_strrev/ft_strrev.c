/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:04:59 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/08 12:20:35 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strrev(char *str)
{
	int i, a;
	int len;
	char swap;

	i = 0;
	len = 0;
	
	while (str[len] != '\0')
	{
		len++;
	}
	a = len;
	len = len - 1;

	while (i < len)
	{
		swap = str[i];
		str[i] = str[len];
		str[len] = swap;
		i++;
		len--;
	}
	str[a] = '\0';
	return (str);
}
int main (void)
{
	int i;
	char s[] = "1234567890";
	printf("%s", ft_strrev(s));
	return (0);
}

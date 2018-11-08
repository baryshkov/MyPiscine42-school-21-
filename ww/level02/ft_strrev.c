/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:03:44 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/06 18:18:17 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char		ft_strrev(char *str)
{
	int len;
	int j;
	char swap;

	len = 0;
	j = 0;
	swap = 0;

	while(str[len] !='\0')
	{
		len++;
	}
	len--;
	while(j < len)
	{
		swap = str[j];
		str[j] = str[len];
		str[len] = swap;
		len--;
		j++;
	}
	return(*str);
}
int main(void)
{
	char c[11] ="1236665";
	printf("%c", ft_strrev(c));
	return(0);
}

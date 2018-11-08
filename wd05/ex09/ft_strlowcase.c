/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:01:52 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/23 21:39:38 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strlowcase(char *str);

int main (void)
{
	int i;
	char lol[100] = "privet LOl kxxAk delA?";
	ft_strlowcase(lol);
	for (i = 0; i<=99; i++)
	{
		printf("%c", lol[i]);
	}
}

char	*ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

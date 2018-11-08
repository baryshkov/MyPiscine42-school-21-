/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:01:52 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/23 21:33:30 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strupcase(char *str);

int main (void)
{
	int i;
	char lol[100] = "privet LOl kxxAk delA?";
	ft_strupcase(lol);
	for (i = 0; i<=99; i++)
	{
		printf("%s", lol[i]);
	}
}

char	*ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

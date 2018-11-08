/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:02:24 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/23 20:28:43 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str1 [11] = "0123456789";
	char str2 [10] = "567";
	ft_strstr(str1, str2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int h;
	
	i = 0;
	if (to_find[0] == '\0')
		return(&str[0]);
	while (str[i] != '\0')
	{
		h = 0
		if (str[i] == to_find[0])
		{
			while (str[i] == to_find[h] && str[i+h] == to_find[h]
		}

		i++
	}
	return (0);
}

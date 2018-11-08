/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 09:26:35 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/25 10:44:13 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#define LEN		42

void ft_putstr(char *str);

int		main()
{
	int		i;
	char	*str;

	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while(i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	return (0);
}

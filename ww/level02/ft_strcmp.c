/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:50:41 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/05 19:00:19 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int f;

	i = 0;
	f = 1;
	while (s1[i] != '\0' && f == 1)
	{
		if (s1[i] != s2[i])
			f--;
		else
			i++;
	}
	return(s1[i] - s2[i]);
}

int main(void)
{
	char s1[4] = {0, 3, 5};
	char s2[4] = {0, 3, 5};

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return(0);	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:47:45 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/07 18:39:19 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int f;
	
	i = 0;
	f = 1;
	while (s1[i] != '\0' && f == 1)
	{
		if (s1[i] == s2[i])
			i++;
		else
			f--;
	}
	return(s1[i] - s2[i]);
}

int main (int argc, char **argv)
{
	if(argc == 3)
	{
		int i;
		int j;
		char str[4000];

		i = 0;
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				str[i] = argv[1][i];
				i++;
			}
			j++;
		}
		if (ft_strcmp(str, argv[1]) == 0)
			write (1, "1", 1);
		else if (ft_strcmp(str, argv[1]) != 0)
			write (1, "0", 1);
	}
	return(0);
}

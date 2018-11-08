/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:21:15 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/07 16:38:02 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int		ft_atoi(char *src)
{
	int i;
	int nbr;
	i = 0;
	nbr = 0;

	while(src[i] != '\0')
	{
		nbr = nbr *10 + src[i] - '0';
		i++;
	}
	return (nbr);
}
int main (int argc, char **argv)
{
	int n1;
	int n2;
	int res;
	char *comp;

	if (argc == 3)
	{
		n1 = ft_atoi(argv[1]);
		n2 = ft_atoi(argv[2]);
		while (n1 != n2)
		{
			if (n1 > n2)
			{
				n1 = n1 - n2;
			}
			else
				n2 = n2 - n1;
		}
		printf("%d", n1);
	}
	write (1, "\n", 1);
	return (0);
}


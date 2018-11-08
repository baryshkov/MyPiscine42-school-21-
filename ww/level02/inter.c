/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:07:59 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/06 17:50:09 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int f;
	int j;

	i = 0;
	f = 0;
	if (argc == 3)
	{
		while (f != argc)
		{
			i = 0;
			while (argv[f][i] != '\0')
			{
				j = i + 1;
				while (argv[f][j] != '\0')
				{
					if (argv[f][j] == argv[f][i])
					{
						argv[f][j] = 1;
					}
					j++;
				}
				i++;
			}
			f++;
		}
		i = 0;
		j = 0;
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
					write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);	
	return (0);
}

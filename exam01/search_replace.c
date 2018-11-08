/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:08:55 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/01 16:20:58 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		main(int argc, char **argv)
{
	int i, h;
	int t;

	i = 0;
	t = 0;
	h = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if(argv[1][i] == argv[2][0])
		{
			t++;
		}
		
		i++;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		h = 0;
		while (argv[1][i+h] == argv[2][h] && argv[2][h] != '\0')
		{
			argv[1][i+h] == argv[3][0]
		}
		write(1, &argv[1][i], 1);
		i++;
	}
	return 0;
} 

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 13:45:59 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/04 16:11:11 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int k;
	int len;

	i = 0;
	k = 1;
	len = 0;

	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			i++;
		}
		i--;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i--;
		}
		while((argv[1][i] != ' ' && argv[1][i] != '\t') && argv[1][i] != '\0')
		{
			i--;
		}
		i++;
		while((argv[1][i] != ' ' && argv[1][i] != '\t') && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

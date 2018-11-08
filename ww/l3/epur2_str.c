/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur2_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:07:57 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/06 19:17:29 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;
	int flg;
	if (argc == 2)
	{
		i = 0;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flg = 1;
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				if (flg)
					write(1, " ", 1);
				flg = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

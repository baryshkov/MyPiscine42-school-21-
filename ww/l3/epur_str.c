/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:46:52 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/06 19:07:27 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int f;

	i = 0;
	f = 0;
	
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i+1] == ' ' || argv[1][i+1] == '\t')
				{
					argv[1][i] = 1;
				}
			}
			i++;
		}
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			argv[1][i] = 1;
			i++;
		}
		while (argv[1][i] != '\0')
		{
			i++;
		}
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			argv[1][i] = 1;
			i--;
		}
		i = 0;
		while(argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}

		/*while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i] >=33 && argv[1][i] <= 126)
		{
			write(1, &argv[1][i]);
			i++;
		}*/

	}
	return (0);
}

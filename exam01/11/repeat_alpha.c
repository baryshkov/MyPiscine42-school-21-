/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:42:42 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/26 14:14:13 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i] != '\0')
	{
		j = 0;
		if(argv[1][i] <= 'z' && argv[1][i] >= 'a')
			{
				while (j < (argv[1][i] - 96))
					{
						write(1, &argv[1][i], 1);
						j++;
					}					
			}
		else if(argv[1][i] <= 'Z' && argv[1][i] >= 'A')
			{
				while (j < (argv[1][i] - 64))
					{
						write(1, &argv[1][i], 1);
						j++;
					}			
			}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:23:11 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/01 20:59:05 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	int i;
	int j;
	int len = 0;

	i = 0;

	while (argv[1][i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	if (argc == 3)
	{
		while (argv[2][j] != '\0' && i < len)
		{
			if (argv[2][j] == argv[1][i])
			{
				i++;
			}
			j++;
		}
		if (i == len + 1)
			ft_putstr(argv[1]);
		else
			write(1, "\n", 1);
		return (0);
	}
}

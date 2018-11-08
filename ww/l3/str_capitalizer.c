/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:36:03 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/07 15:01:48 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		ft_check(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int main (int argc, char **argv)
{
int i;
int f;
int a;

i = 0;
f = 0;
a = 1;
if (argc > 1)
{
	while(a != argc)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			if (ft_check(argv[a][i]))
				argv[a][i] = argv[a][i] + 32;
			i++;
		}
		i = 0;
		f = 1;
		while (argv[a][i] == ' ' || argv[a][i] == '\t')
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		while (argv[a][i] != '\0')
		{
			if (argv[a][i] == ' ' || argv[a][i] == '\t')
				f = 1;
			if (argv[a][i] != ' ' && argv[a][i] != '\t')
			{
				if (f && (argv[a][i] >= 'a' && argv[a][i] <= 'z'))
					argv[a][i] = argv[a][i] - 32;
				f = 0;
			}
			write(1, &argv[a][i], 1);
			i++;
		}
		write(1, "\n", 1);
		a++;
	}
}
else
	write(1, "\n", 1);
return (0);
}


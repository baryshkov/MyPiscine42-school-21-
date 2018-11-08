/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:31:03 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/24 21:23:03 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		ft_putchar(src[i]);
		ft_putchar('\n');
	}
}
int		main(int argc, char **argv)
{
	int i;

	i = 0;
	count = 0;
	if(argc != 4)
		return (ft_putchar('\n'));
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
			{
				count++;
				argv[1][i] = argv[3][0];
			}
		i++;
	}
	if (count == 0)
	{
		ft_putstr(*argv);
		ft_putchar('\n');
		return (0);
	}

	ft_putstr(*

}

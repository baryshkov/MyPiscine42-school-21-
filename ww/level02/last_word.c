/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 13:45:59 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/04 15:48:28 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return(1);
	return(0);
}
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
		while(ft_isblank(argv[1][i]))
		{
			i--;
		}
		while(argv[1][i] != '\0' && !ft_isblank(argv[1][i]))
		{
			i--;
		}
		i++;
		while(argv[1][i] != '\0' && !ft_isblank(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

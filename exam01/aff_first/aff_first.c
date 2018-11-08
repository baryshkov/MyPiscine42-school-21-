/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:06:18 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/26 11:21:35 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main (int argc, char **argv)
{
	int i;

	i = 0;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
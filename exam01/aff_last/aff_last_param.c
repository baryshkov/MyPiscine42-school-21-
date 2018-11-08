/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:27:36 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/26 11:43:20 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int t;

	i = 1;
	t = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[argc-1][t])
	{
		write(1, &argv[argc-1][t], 1);
		t++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 10:19:50 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/02 10:27:20 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	if(argc == 4)
	{
		if (argv[2][0] == '+')
		{
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		}
		if (argv[2][0] == '-')
		{
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		}
	}
	return (0);
}

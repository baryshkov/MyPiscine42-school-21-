/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 12:15:01 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/20 12:48:25 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	fn(int i)
{
	if (i <=5)
	{
		i++;
		write(1, "D", 1);
		fn(i);
		write(1, "F", 1);
		return (0);
	}
	else
	{
		return (0);
	}
}

int main()
{
	fn(0);
	return (0);
}

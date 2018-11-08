/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 18:49:41 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/20 19:03:38 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int main (void)
{
	int res;
	res = ft_fibonacci(30);
	printf("%d", res);
}

int ft_fibonacci(int index)
{
	if (index < 0)
		return (0);
	if (index == 0 || index == 1)
		return (index);
	else
		return ft_fibonacci(index - 1) + ft_fibonacci(index -2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 14:57:37 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/21 12:48:10 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	int b;

	b = ft_recursive_factorial(3);
	printf("%d", b);
	return (0);
}

int ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >12)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));

}

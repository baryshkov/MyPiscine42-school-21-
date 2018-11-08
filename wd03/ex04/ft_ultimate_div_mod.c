/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 22:27:09 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/19 22:50:55 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;
	a = 42;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("a=%d, b=%d", a, b);

}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int rem;
	int div;

	rem = *a % *b;
	div = *a / *b;

	*a = div;
	*b = rem;

}

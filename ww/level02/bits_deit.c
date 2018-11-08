/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits_deit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:13:54 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/06 14:37:26 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	unsigned x;
	void displayBits(unsigned);

	printf("enter unsigned int: ");
	scanf("%u", &x);
	displayBits(x);
	return(0);
}

void	displayBits(unsigned value)
{
	unsigned c, displayMask = 1;// << 7;

	printf("%7u = ", value);
	c = 1;
	while (c <= 8)
	{
		//printf("\n%u - znacenie", value);
		if(value & displayMask)
			putchar('1');
		else if(!(value & displayMask))
			putchar('0');
		//putchar(value & displayMask ? '1' : '0');
		value >>= 1;
		if (c % 8 == 0)
			putchar(' ');
		c++;
	}
	putchar('\n');
}

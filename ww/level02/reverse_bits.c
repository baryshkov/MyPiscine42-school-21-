/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:42:38 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/06 15:57:29 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
unsigned char		reverse_bits(unsigned char octet)
{
	int i;
	unsigned int k;
	unsigned int mask;

	mask = 1;
	i = 0;
	k = 0;
	while (i < 8)
	{
		k = (k << 1) | (octet & 1);
		octet = octet >> 1;
		i++;
		//print reverse
		//if (octet & mask)
		//	write(1, "1", 1);
		//else if (!(octet & mask))
		//	write(1, "0", 1);
		//octet = octet >> 1;
		//i++;
	}
	return (k);
}
int main(void)
{
	printf("%d", reverse_bits(2));
	return (0);
}

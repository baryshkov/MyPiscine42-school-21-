/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:03:28 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/06 14:42:26 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void		print_bits(unsigned char octet)
{
	int i;
	unsigned int mask;

	mask = 1<<7;
	
	i = 0;
	while(i < 8)
	{
		if(octet & mask)
			write(1, "1", 1);
		else if(!(octet & mask))
			write(1, "0", 1);
		octet = octet << 1;
		i++;
	}
}
int main (void)
{
	print_bits(255);
	return(0);
}

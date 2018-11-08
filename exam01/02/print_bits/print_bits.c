/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 11:38:37 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/02 12:06:54 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int i;
	int j;
	char n[8] = {0};

	//0 255
	i = 7;
	while (i >= 0)
	{
		n[i] = (octet % 2) + '0';
		octet = octet / 2;
		i--;		
	}
	while (i != 8)
	{
		write(1, &n[i], 1);
		i++;
	}	
}
int main (void)
{
	unsigned char d = 10;
	print_bits(d);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 09:31:41 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/24 11:56:49 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_putnbr(int nb)
{
	int i;
	char minus = '-';
	if (nb == -2147483648)
	{
		ft_putchar(minus);
		ft_putnbr(214748364);
		ft_putchar('8');
		return;
	}
	if (nb < 0)
	{
		ft_putchar(minus);
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(48 + nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(48 + nb % 10);
	}
}

int main(void)
{
	ft_putnbr(-2147483648);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:58:54 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/29 20:21:17 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *new;

	i = 0;
	new = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return(new);		
}
int        ft_putchar(char c)
{
    write(1, &c, 1)
}

void    ft_putnbr(int nb)
{
    char    minus;
    
    minus = '-';
    if (nb == -2147483648)
    {
        ft_putchar(minus);
        ft_putnbr(214748364);
        ft_putchar('8');
        return ;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_multi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:02:38 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/07 15:45:58 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb > 10)
	{
		ft_putnbr(nb/10);
		ft_putchar(nb % 10 + '0');
	}
}
int	atoi (char *src)
{
	int i;
	int res;

	i = 0;
	res = 0;

	while (src[i] != '\0' && (src[i] >= '0' && '9' >= src[i]))
	{
		res = (res * 10) + src[i] - '0';
		i++;
	}
	return (res);
}
int main (int argc, char **argv)
{
	int i;
	int res;
	int numb;

	i = 1;
	res = 0;
	if(argc > 1)
	{
		numb = atoi(argv[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(numb);
			write(1, " = ", 3);
			res = i * numb;
			ft_putnbr(i * numb);
			i++;
			write(1, "\n", 1);
		}	
	}
	return (0);
}

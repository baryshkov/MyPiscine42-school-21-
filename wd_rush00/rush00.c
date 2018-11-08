/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 14:26:34 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/21 16:04:17 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);
int ft_nputchar(char c, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		ft_putchar(c);
		count++;
	}
	return (0);
}

void	ft_writeline(int length, char start, char n_char, char end)
{
	if (length > 0)
	{
		ft_putchar(start);
	}
	if (length - 2 > 0)
	{
		ft_nputchar(n_char, length - 2);
	}
	if (length > 1)
	{
		ft_putchar(end);
	}
}

int rush(int x, int y)
{
	ft_writeline(x, 'o', '-', 'o');
	ft_putchar('\n');
	while (y > 2)
	{
		ft_writeline(x, '|', ' ', '|');
		ft_putchar('\n');
		y--;
	}
	if (y > 1)
	{
		ft_writeline(x, 'o', '-', 'o');
		ft_putchar('\n');
	}
	return (0);
}

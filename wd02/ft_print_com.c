/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 20:10:13 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/18 20:19:32 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(void);

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;
	int i;

	i = 12;
	while (i <= 789)
	{
		z = i % 10;
		y = i % 100 / 10;
		x = i / 100;
		if (x < y && y < z)
		{
			ft_putchar('0' + x);
			ft_putchar('0' + y);
			ft_putchar('0' + z);
			if (i != 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}

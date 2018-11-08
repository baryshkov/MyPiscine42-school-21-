/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 22:01:24 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/18 09:25:42 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char k);

void	ft_is_negative(int n)
{
	int x;

	x = n;
	if (x >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
	ft_putchar('\n');
}
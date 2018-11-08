/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 20:02:03 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/29 21:01:54 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*));
{
	int i;

	i = 0;
	while(tab[i] != 0)
	{
		if(f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:18:19 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/30 14:01:23 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length int(*f)(int, int))
{
	int i;

	i = 0;
	count = 0;
	while(i < length - 1)
	{
		if(f(tab[i], tab[i+1]) >= 0)
			count++;
		if(f(tab[i], tab[i+1]) <= 0)
			count--;
		i++;
	}
	if (count == length - 1)
		return (1);
	else if (-count == length - 1)
		return (1);
	else
		return (0);
}

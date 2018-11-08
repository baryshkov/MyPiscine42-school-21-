/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 09:54:27 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/23 21:00:34 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		while (s1[i] == s2[i])
		{
			if (s1[i] == '\0')
				return (0);
			i++;
		}
		n--;
	}
	return (s1[i] - s2[i]);
}

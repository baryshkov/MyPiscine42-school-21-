/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 10:28:39 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/02 10:43:01 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(s1[i] != '\0' && c == 1)
	{
		if (s1[i] != s2[i])
			j--;
		i++;
	}
	return(s1[i] - s2[i])
}
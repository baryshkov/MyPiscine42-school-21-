/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:39:55 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/26 13:41:51 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++
	}
	s2[i] = '\0';
	return(s2);
}

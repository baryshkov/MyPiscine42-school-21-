/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 09:54:27 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/23 20:07:46 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int		strcmp(const char *s1, const char *s2);
int		ft_strcmp(char *s1, char *s2);

int 	main(void)
{
	int i;
	char *st1 = "Supppppp";
	char *st2 = "Supppppp";

	printf("Strcmo: %d ", strcmp(st1, st2));
	printf("ft_strcmp: %d ", ft_strcmp(st1, st2));
	printf("src: %s ", st1);
	printf("Search: %s ", st2);
	return (0);

}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] == s2[i])
		{
			if (s1[i] == '\0')
				return (0);
			i++;
		}
	return (s1[i] - s2[i]);
}
	

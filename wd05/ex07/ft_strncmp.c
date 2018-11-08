/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 09:54:27 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/23 20:55:55 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int		strncmp(const char *s1, const char *s2, size_t n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

int 	main(void)
{
	int i;
	char *st1 = "Sppppp";
	char *st2 = "Su2pppp";

	printf("Strcmo: %d ", strncmp(st1, st2, 5));
	printf("ft_strcmp: %d ", ft_strncmp(st1, st2, 5));
	printf("src: %s ", st1);
	printf("Search: %s ", st2);
	return (0);

}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		while(s1[i] == s2[i])
		{
			if (s1[i] == '\0')
				return(0);
			i++;
		}
		n--;
	}
	return (s1[i] - s2[i]);
}
	

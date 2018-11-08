/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recmatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 13:37:49 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/29 17:09:37 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s2 == '*' && *s1 != '\0')
		{
			if (match(s1, s2+1))
				return (1);
			else if (match(s1+1, s2))
				return (1);
			else
				return(0);
		}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != '\0' && *s1 == *s2)
		return match(s1 + 1, s2 + 1);
	if (*s1 == '*' && *s2 == '*')
		return match(s1 + 1, s2);
	if ((*s1 != '\0' && *s2 != '\0') && *s2 == '*')
		return (match(s1, s2+1));
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2+1));
	return(0);
}

int main(int argc, char **argv)
{
	argc = 0;
	printf("%d", match(argv[1], argv[2]));
	return 0;
}

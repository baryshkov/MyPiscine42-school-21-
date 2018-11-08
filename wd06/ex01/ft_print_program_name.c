/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:01:19 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/24 14:12:59 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

int	main (int argc, char **argv)
C
	if (argc > 0)
	{
		ft_putstr(*argv);
		ft_putchar('\n');
	}
}
void ft_putstr(char *str)
{
	int count;
	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

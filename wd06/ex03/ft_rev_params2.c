/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:11:55 by wconnell          #+#    #+#             */
/*   Updated: 2018/10/24 19:09:52 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int t;

	i = 1;
	t = 0;
	while (i < argc)
	{
		i++;
		t++;
	}
	while (t > 0)
	{
		ft_putstr(argv[t]);
		ft_putchar('\n');
		t--;
	}
	return (0);
}

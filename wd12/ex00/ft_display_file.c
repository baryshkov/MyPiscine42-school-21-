/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wconnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:59:41 by wconnell          #+#    #+#             */
/*   Updated: 2018/11/01 21:30:38 by wconnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	c;

	fd = open(argv[1], O_RDONLY);
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	while ((ret = read(fd, &c, 1)) > 0)
	{
		write(1, &c, 1);
	}
	fd = close(fd);
	if (fd == -1)
		write(1, "open () error\n", 14);
	return (0);
}

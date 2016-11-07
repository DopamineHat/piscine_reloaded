/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 05:01:46 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/05 05:37:33 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_display_file(char *argv)
{
	char	buffer[1];
	int		fd;

	fd = open(argv, O_RDONLY);
	while (read(fd, &buffer[0], 1))
	{
		ft_putchar(buffer[0]);
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2);
	else if (argc == 2)
		ft_display_file(argv[1]);
	else
		ft_putstr("Too many arguments.\n", 2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:00:59 by naharumi          #+#    #+#             */
/*   Updated: 2024/10/11 18:00:57 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		fd;
	ssize_t	size;
	char	buffer[4096];

	if (ac < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (1);
	size = read(fd, buffer, sizeof(buffer));
	while (size > 0)
	{
		write(1, buffer, size);
		size = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return (0);
}

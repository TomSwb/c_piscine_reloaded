/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:54:04 by tomswb            #+#    #+#             */
/*   Updated: 2026/09/04 14:59:44 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_err(char *message);

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes_read;
	char	buffer[4096];

	if (argc < 2)
	{
		ft_err("File name missing.");
		return (1);
	}
	if (argc > 2)
	{
		ft_err("Too many arguments.");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_err("Cannot read file.");
		return (1);
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	if (bytes_read == -1)
	{
		ft_err("Cannot read file.");
		return (1);
	}
	return (0);
}

void	ft_err(char *message)
{
	while (*message)
	{
		write(2, message, 1);
		message++;
	}
	write(2, "\n", 1);
}

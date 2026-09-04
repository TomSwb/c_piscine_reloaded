/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:54:04 by tomswb            #+#    #+#             */
/*   Updated: 2026/09/04 15:00:49 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void  ft_err(char *s);

int  main(int ac, char **av)
{
  int	fd;
  char	buf[5120];
  int	reading;
  
  if (ac < 2)
    return (ft_err("File is missing."), -1);
  if (ac > 2)
    return (ft_err("Too many arguments."), -1);
  fd = open(av[1], 0);
  if (fd == -1)
    return (ft_err("Cannot read file."), -1);
  reading = read(fd, &buf, 4098);
  while (reading > 0)
  {
    write(1, &buf, reading);
    reading = read(fd, &buf, 4098);
  }
  if (reading == -1)
  {
    close(fd);
    return (ft_err("Cannot read file."), -1);
  }
  close(fd);
}

void  ft_err(char *s)
{
  while (*s)
  {
    write(2, s, 1);
    s++;
  }
  write(2, "\n", 1);
}

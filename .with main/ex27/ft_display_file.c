
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
  reading = read(fd, &buf, 1);
  while (reading > 0)
  {
    write(1, &buf, 1);
    reading = read(fd, &buf, 1);
  }
  if (reading == -1)
    return (ft_err("Cannot read file."), -1);
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

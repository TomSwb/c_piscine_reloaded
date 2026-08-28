
#include <string.h>
#include <stdio.h>

int  ft_strcmp(char *s1, char *s2);

int  main(int ac, char **av)
{
  char  *s1;
  char  *s2;

  if (ac == 3)
  {
    s1 = av[1];
    s2 = av[2];
  }
  else
    return (-1);
  printf("ft: %d\n", ft_strcmp(s1, s2));
  printf("og: %d\n", strcmp(s1, s2));
}

int  ft_strcmp(char *s1, char *s2)
{
  while (*s1 && *s1 == *s2)
  {
    s1++;
    s2++;
  }
  return ((unsigned char)*s1 - (unsigned char)*s2);
}


#include <string.h>
#include <stdio.h>

char *ft_strdup(const char *s);

int main(void)
{
    const char s[] = "Hello";
    char *ft_dest;
    char *og_dest;
    
    printf("ft = %p, addr = %p\n", ft_dest, &ft_dest);
    printf("og = %p, addr = %p\n", og_dest, &og_dest);
    ft_dest = ft_strdup(s);
    og_dest = strdup(s);
    printf("ft = %s, addr = %p\n", ft_dest, &ft_dest);
    printf("og = %s, addr = %p\n", og_dest, &og_dest);
}

char *ft_strdup(const char *s)
{
    int i;
    char *dest;
    
    i = 0;
    while (s[i])
        i++;
    dest = malloc(sizeof(char) * i);
    if (!dest)
        return (NULL);
    while (*s)
    {
        *dest = *s;
        s++;
        dest++;
    }
    *dest = '\0';
    return (dest);
}
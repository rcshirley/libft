#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	aux;

	aux = (unsigned char)c;
	while (*s && *s != aux)
		s++;
	if (*s == aux)
		return ((char *)s);
	return (NULL);
}

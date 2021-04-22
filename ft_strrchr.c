#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	aux;

	len = ft_strlen(s);
	aux = (unsigned char)c;
	while (len != 0 && s[len] != aux)
		len--;
	if (s[len] == aux)
		return ((char *)&s[len]);
	return (NULL);
}

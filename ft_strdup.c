#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	size_t	len;

	len = ft_strlen(s);
	sdup = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !sdup)
		return (NULL);
	sdup = ft_memcpy(sdup, s, len);
	sdup[len] = '\0';
	return (sdup);
}

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t t)
{
	size_t	i;
	size_t	j;

	if (!*(needle))
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < t)
	{
		j = 0;
		while (i + j < t && haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

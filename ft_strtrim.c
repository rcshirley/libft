#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	a;
	size_t	b;

	if (!s1 || !set)
		return (NULL);
	a = 0;
	while (s1[a] && ft_strchr(set, s1[a]))
		a++;
	b = ft_strlen((char *)s1 + a);
	if (b)
		while (s1[b + a - 1] != 0 && ft_strchr(set, s1[b + a - 1]))
			b--;
	str = malloc((b + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + a, b + 1);
	str[b] = '\0';
	return (str);
}

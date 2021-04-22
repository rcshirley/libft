#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	size_t	i;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < size1)
		str[i] = s1[i];
	i--;
	while (++i < size1 + size2)
		str[i] = s2[i - size1];
	str[i] = '\0';
	return (str);
}

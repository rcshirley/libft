#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ret;
	size_t	aux;

	aux = size * nmemb;
	ret = malloc(aux);
	if (!ret)
		return (NULL);
	ft_memset(ret, 0, aux);
	return (ret);
}

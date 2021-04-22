#include "libft.h"

void	*ft_memchr(const void *dest, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)dest;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (NULL);
}

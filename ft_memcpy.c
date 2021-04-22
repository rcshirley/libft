#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*p;
	const unsigned char		*q;

	if (!dest && !src)
		return (0);
	p = dest;
	q = src;
	while (n--)
		*p++ = *q++;
	return (dest);
}

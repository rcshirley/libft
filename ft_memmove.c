#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*p;
	const unsigned char		*q;

	if (!dest && !src)
		return (0);
	p = dest;
	q = src;
	if (dest < src)
		dest = ft_memcpy(dest, src, n);
	else if (dest > src)
		while (n--)
			*(p + n) = *(q + n);
	return (dest);
}

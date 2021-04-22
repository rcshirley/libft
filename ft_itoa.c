#include "libft.h"	

static char	*ft_tens(int n, int i, char *ret)
{
	char	aux[12];
	int		r;
	int		dig;

	dig = 0;
	while (n != 0)
	{
		r = n % 10;
		n = n / 10;
		if (r < 0)
			r = r * -1;
		aux[dig++] = r + '0';
	}
	while (dig-- > 0)
		ret[i++] = aux[dig];
	ret[i] = '\0';
	return (ret);
}

char	*ft_itoa(int n)
{
	char	ret[12];
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	i = 0;
	if (n < 0)
		ret[i++] = '-';
	ft_tens(n, i, ret);
	return (ft_strdup(ret));
}

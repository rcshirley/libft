#include "libft.h"

#include <unistd.h>

static void	finddig(int n, int *v, int *i)
{
	int	d;
	int	j;

	j = 0;
	while (j <= 9)
	{
		d = n % 10;
		n = n / 10;
		if (d < 0)
			d = -d;
		v[j] = d;
		j++;
		if (n == 0)
			break ;
	}
	*i = j;
}

static void	printnr(int *v, int i, int fd)
{
	int	j;

	j = i - 1;
	while (j >= 0)
	{
		ft_putchar_fd('0' + v[j], fd);
		j--;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	v[10];
	int	i;

	if (nb < 0)
		ft_putchar_fd('-', fd);
	finddig(nb, v, &i);
	printnr(v, i, fd);
}

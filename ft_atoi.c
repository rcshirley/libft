#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while (ft_isspace(str[a]))
		a++;
	if (str[a] == '+')
		a++;
	else if (str[a] == '-')
	{
		b *= -1;
		a++;
	}
	while (ft_isdigit(str[a]))
	{
		c = c * 10 + str[a] - '0';
		a++;
	}
	return (c *= b);
}

#include "libft.h"

static int	count_splits(char const *s, char c)
{
	int	ns;
	int	i;
	int	flag;

	ns = 0;
	i = 0;
	flag = 1;
	if (s[0] == '\0')
		return (0);
	if (s[i] != c)
		ns++;
	while (s[i] != '\0')
	{
		if (flag == 1 && s[i] == c)
			flag = 0;
		else if (s[i] != c && flag == 0)
		{
			ns++;
			flag = 1;
		}
		i++;
	}
	return (ns);
}

static int	len_word(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static int	alloc_ret(char **ret, char const *s, int nsplits, int c)
{
	int		i;
	int		j;
	int		wlen;
	int		k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < nsplits)
	{
		if (s[i] == c)
			i++;
		else
		{
			wlen = len_word(s, c, i);
			ret[j] = (char *)malloc(sizeof (char) * (wlen + 1));
			if (!ret[j])
				return (0);
			k = 0;
			while (k < wlen)
				ret[j][k++] = s[i++];
			ret[j][k] = '\0';
			j++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		nsplits;
	char	**ret;
	int		a;

	if (!s)
		return (NULL);
	nsplits = count_splits(s, c);
	ret = (char **)malloc(sizeof (char *) * (nsplits + 1));
	if (!ret)
		return (NULL);
	ret[nsplits] = NULL;
	a = alloc_ret(ret, s, nsplits, c);
	if (a == 0)
		return (NULL);
	return (ret);
}

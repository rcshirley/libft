int	ft_isascii(int c)
{
	int	q;

	q = 0;
	if (c <= 127 && c >= 0)
		q = 1;
	return (q);
}

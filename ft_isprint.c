int	ft_isprint(int c)
{
	int	q;

	q = 0;
	if (c <= 126 && c >= 32)
		q = 1;
	return (q);
}

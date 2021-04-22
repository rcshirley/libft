int	ft_isdigit(int c)
{
	int	q;

	q = 1;
	if (c <= 47 || c >= 58)
		q = 0;
	return (q);
}

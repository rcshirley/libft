int	ft_isalpha(int c)
{
	int	q;

	q = 1;
	if ((c <= 64 || c >= 91) && (c <= 96 || c >= 123))
		q = 0;
	return (q);
}

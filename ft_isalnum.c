int	ft_isalnum(int c)
{
	int	q;

	q = 1;
	if ((c <= 64 || c >= 91) && (c <= 96 || c >= 123) && (c <= 47 || c >= 58))
		q = 0;
	return (q);
}

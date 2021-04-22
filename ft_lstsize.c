#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*aux;

	if (!lst)
		return (0);
	size = 1;
	aux = lst;
	while (aux -> next != NULL)
	{
		size++;
		aux = aux -> next;
	}
	return (size);
}

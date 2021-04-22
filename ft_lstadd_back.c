#include "libft.h"

/*add the element new to the end of the list*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			aux = ft_lstlast(*lst);
			aux -> next = new;
		}
	}
}

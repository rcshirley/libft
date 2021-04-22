#include "libft.h"

/*add the node new to the front of list lst*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			new -> next = *lst;
			*lst = new;
		}
	}
}

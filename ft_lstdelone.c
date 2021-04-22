#include "libft.h"

/*takes as a parameter an element and frees the memory of the element's */
/*content using tge function 'del' given as a parameter and free the element.*/
/*the memory of 'next' must not be freed.*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*aux;

	if (lst)
	{
		del(lst -> content);
		if (lst -> next == NULL)
		{
			aux = lst;
			lst = NULL;
			free(aux);
		}
		else
		{
			aux = lst;
			lst = lst -> next;
			free(aux);
		}
	}
}

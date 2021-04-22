#include "libft.h"

/*deletes and frees the given element and every successor of that elemeent,*/
/*using the function del and free. Finally, the pointer to*/
/*the list must be set to null.*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	int		size;
	int		i;

	if (*lst)
	{
		i = 0;
		size = ft_lstsize(*lst);
		while (i++ < size)
		{
			aux = *lst;
			*lst = (*lst)-> next;
			ft_lstdelone(aux, del);
		}
	}
}

#include "libft.h"

/*iterates the list 'lst' and applies the function 'f' to the content */
/* of each element. creates a new list resulting of the successive*/
/* applications of the function 'f'. The 'del' function is used to delete*/
/* the content of an element if needed*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	head = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

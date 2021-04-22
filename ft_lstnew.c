#include "libft.h"

/*new node*/

t_list	*ft_lstnew(void *content)
{
	t_list	*aux;

	aux = malloc(sizeof(t_list));
	if (!aux)
		return (NULL);
	aux -> next = NULL;
	aux -> content = content;
	return (aux);
}

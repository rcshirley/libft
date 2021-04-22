#include "libft.h"

/*iterates the list 'lst' and applies the function 'f' to*/
/*the content of each element*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int	size;
	int	i;

	size = ft_lstsize(lst);
	i = 0;
	while (i++ < size)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

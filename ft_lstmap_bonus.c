#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;
	void	*new_content;

	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (new_content == NULL)
		{
			while (new_list)
			{
				current = new_list;
				del(current->content);
				free(current);
				new_list = new_list->next;
			}
			return (NULL);
		}
		ft_lstadd_back(&new_list, ft_lstnew(new_content));
		lst = lst->next;
	}
	return (new_list);
}

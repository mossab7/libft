#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst_head;
    t_list *new_lst;
    t_list *current;

    if (!lst || !del || !f)
        return (NULL);

    new_lst_head = NULL;
    current = NULL;
    
    while (lst)
    {
        new_lst = ft_lstnew(f(lst->content));
        if (!new_lst)
        {
            ft_lstclear(&new_lst_head, del);
            return (NULL);
        }
        
        if (!new_lst_head)
        {
            new_lst_head = new_lst;
        }
        else
        {
            current->next = new_lst;
        }
        
        current = new_lst;
        lst = lst->next;
    }
    
    return (new_lst_head);
}

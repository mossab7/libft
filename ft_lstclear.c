#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst,void (*del)(void *))
{
  t_list *current;
  t_list *next_node;

  if(!lst || !del)
    return;
  current = *lst;
  while(current)
  {
    next_node = current -> next;
    del(current -> content);
    free(current);
    current = next_node;
  }
  *lst = NULL;

}

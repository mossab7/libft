#include "libft.h"
#include <stdlib.h>

void ft_lstadd_back(t_list **lst,t_list *new)
{
  t_list last;
  
  if(!lst || !new)
    return NULL;
  if(*lst == NULL)
    *lst = new;
  else 
  {
    *last = ft_lstlast(*lst);
    *last -> next = new;
  }
}
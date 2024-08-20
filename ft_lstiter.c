#include "libft.h"

void fr_lstiter(t_list *lst, void (*f)(void *))
{
  if(!lst || !f)
    return;
  while(lst != NULL)
  {
    f(lst -> content);
    lst = lst-> next;
  }

}

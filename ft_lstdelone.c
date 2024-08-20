#include "libft.h"
#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
  if(lst && del)
  {
    del(lat -> content);
    free(lst);
  }
}

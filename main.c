#include "libft.h"
#include <stdio.h>
int main(void)
{
    char *str = "hello! world";
    char **split = ft_split(str, ' ');
    for(int i = 0;i< ft_countwords(str,' ');i++)
        printf("%s\n",split[i]);
}
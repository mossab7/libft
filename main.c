#include <libft.h>
#include <stdio.h>

int main()
{
    char *str = NULL;
    char **split =  ft_split(NULL,' ');
    if(!split)
        return 0;
    for(int i = 0; i < 4;i++)
    {
        printf("%s\n",split[i]);
    }
}

#include <libft.h>
#include <stdio.h>

int main()
{
    char *str = "hello world mother fuckers!";
    char **split =  ft_split(str,' ');
    if(!split)
        return 0;
    for(int i = 0; i < 4;i++)
    {
        printf("%s\n",split[i]);
    }
}

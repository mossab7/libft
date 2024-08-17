#include "libft.h"

char *ft_strnstr(const char *str, const char *to_find, size_t size)
{
    size_t i;
    size_t j;

    if (*to_find == '\0')
        return (char *)str;

    i = 0; 
    while (str[i] != '\0' && i < size)
    {
        j = 0;
        while (to_find[j] != '\0' && i + j < size && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
            return (char *)&str[i];
        i++;
    }
    return NULL;
}
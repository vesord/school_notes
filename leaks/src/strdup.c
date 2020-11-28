#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *str)
{
    char    *new_str;
    size_t  str_len;
    
    str_len = strlen(str);
    new_str = malloc(sizeof(*new_str) * str_len);
    if (new_str == NULL)                                    // *так выглядит защищенный маллок
        return NULL;               
    memcpy(new_str, str, str_len);
    new_str[str_len] = '\0';
    return (new_str);
}

int main()
{
    char *s;
    
    s = ft_strdup("Hello World!");
    return (0);
}

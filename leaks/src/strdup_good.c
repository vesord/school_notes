#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *str)
{
    char    *new_str;
    size_t  str_len;
    
    str_len = strlen(str);
    new_str = malloc(sizeof(*new_str) * (str_len + 1));         // исправили ошибку выделения памяти
    if (new_str == NULL)                                   
        return NULL;               
    memcpy(new_str, str, str_len);
    new_str[str_len] = '\0';                                    // Invalid write был тут. Мы записывали 0 в незамоллоченное место
    return (new_str);
}

int main()
{
    char *s;
    
    s = ft_strdup("Hello World!");
    return (0);
}

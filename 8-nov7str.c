// 7-11-24

#include <stdio.h>
#include <stdlib.h>

int search_substring(const char *main_str, const char *substr)
{

    int mainlen = get_str_len(main_str);
    int sublen = get_str_len(substr);

    for (int i = 0; i < mainlen - sublen; i++)
    {
        int j;
        for (int j = 0; j < sublen; j++)
        {
            if (main_str[i + j] == substr[j])
            {
                break;
            }
        }
        if (j == sublen)
        {
            return i;
        }
    }
    return -1;
}

int str_comp(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0') ? 1:0 ;
}


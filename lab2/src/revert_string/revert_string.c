#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
    char tmp;
    int i = 0;
    for (i = 0; i < strlen(str)/2; i++)
    {
        tmp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = tmp;
    }
}


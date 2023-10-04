/* _strcpy.c */
#include "main.h"
char *_strcpy(char *dest, char *src)
{
    char *temp = dest;
    while (*src)
    {
        *temp = *src;
        temp++;
        src++;
    }
    *temp = '\0';
    return dest;
}

/*
Desp: 2. Implement your own strncat() which shall concatenate n characters from src to dest.

char *strncat(char *dest, const char *src, size_t n)
Author: Yashodha_Beeraka_557
Date of creation or Date of modification:
Version: 0.1v
*/
#include <stdio.h>

char *my_strncat(char *dest, const char *src, size_t n)
{
    char *ptr = dest + strlen(dest);
    while (*src && n--)
        {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}

int main()
{
    char dest[100] = "Hello, ";
    char src[] = "World!";
    size_t n = 3;
    my_strncat(dest, src, n);
    printf("Concatenated string: %s\n", dest);
    return 0;
}

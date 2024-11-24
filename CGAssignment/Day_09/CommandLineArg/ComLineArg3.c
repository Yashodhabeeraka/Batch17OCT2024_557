/*
Desp: 3. Refer the code “find_max.c”. Add a function below to accept variable number of strings and to return the string with maximum length to the caller. In case of strings with same length, return the first string in the input sequence
max_len_string(<variable number of arguments>)
Eg. Code below shoud output “hello”
char *ptr = max_len_string(“hi”, “hello”, “How”, “ Are”, “END”);
printf(“%s”, ptr);

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 6th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

char* max_len_string(int num, ...) {
    va_list args;
    va_start(args, num);

    char *max_str = NULL;
    int max_len = 0;

    for (int i = 0; i < num; i++) {
        char *str = va_arg(args, char*);
        int len = strlen(str);
        if (len > max_len) {
            max_len = len;
            max_str = str;
        }
    }

    va_end(args);
    return max_str;
}

int main() {
    char *ptr = max_len_string(5, "hi", "hello", "How", "Are", "END");
    printf("%s\n", ptr);
    return 0;
}


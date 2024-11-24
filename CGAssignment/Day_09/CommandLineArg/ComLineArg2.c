/*
Desp: 2. Implement a log() with signature as below to display all the input arguments as per their type. [Hint: In log() , use vfprintf() to display the received inputs]
void log(const char *format, …);
For e.g.
int main()
{
int count = 10;
char prefix = ‘h’;
char label[] = “India”;
…
log(“count:%d, prefix:%c, label:%s”, count, prefix, label);
…
}
Expected Output:
count:10,prefix:h,label:India
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 6th-11-2024
Version: 0.1v
*/

#include <stdio.h>
#include <stdarg.h>

void log(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vfprintf(stdout, format, args);
    va_end(args);
}

int main() {
    int count = 10;
    char prefix = 'h';
    char label[] = "India";

    log("count:%d, prefix:%c, label:%s\n", count, prefix, label);

    return 0;
}


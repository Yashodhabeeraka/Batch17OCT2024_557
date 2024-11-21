/*
Q3. Find  the  sum  of  series  1+4-9+16-25+36
*/

#include <stdio.h>

int main() {
    int series[] = {1, 4, -9, 16, -25, 36};
    int sum = 0;
    int length = sizeof(series) / sizeof(series[0]);

    for (int i = 0; i < length; i++) {
        sum += series[i];
    }

    printf("Sum of the series: %d\n", sum);
    return 0;
}


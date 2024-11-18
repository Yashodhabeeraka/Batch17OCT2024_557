/* Enum demo*/

#include <stdio.h>

enum daysofWeek {
    monday,
    tuesday,
    wednesday,
    thursday,  
    friday,
    saturday,
    sunday
} Days;

int main() 
{
    Days = monday;

    printf("\nDay=%d", Days);

    printf("\n\n");
    return 0;
}


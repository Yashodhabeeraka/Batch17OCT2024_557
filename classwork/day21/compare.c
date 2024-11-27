#include <stdio.h>
#include <bool.h>

typedef struct 
{
	int day;
    int month;
    int year;
} Date;

int compareDates(Date date1, Date date2)

int main() 
{
    int result = compareDates(date1, date2);

    if (result > 0) 
	{
        printf("E\n");
    } 
	else if (result < 0) 
	{
        printf("L\n");
    } 
	else 
	{
        printf("S\n");
    }

    return 0;
}

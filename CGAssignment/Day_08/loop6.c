/*
Desp: 5. Refer the code below. It does not output anything.
Fix it.
*/

#include <stdio.h>

int main()
{
        int x = 5;
        while (x > 0)
        {
                printf( "Value of x :%d \n", x);
                x--;
        }
        return 0;
}
user76@trainux01:~/Batch17OCT2024_557/Assignments/day_08$ ^C
user76@trainux01:~/Batch17OCT2024_557/Assignments/day_08$ cat loop6.c
/*
Desc: 6. Analyse the code, identify the issues
*/

#include <stdio.h>
int main()
{
        float count = 0, num = 1000;
        do
        {
                printf ("\n%f\n%f", num,count);
                num /= count;
        }
        while (count--);
        return 0;
}

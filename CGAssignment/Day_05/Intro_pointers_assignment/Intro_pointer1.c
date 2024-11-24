/*
Desp: Refer the code snippet below. int main()
{
char arr=”hello hi “;
int *ptr = arr;
printf(“sizeof ptr:%d, arr:%d”, sizeof(ptr), sizeof(arr));
display(ptr); // display the address in hex and contents using pointer
}
Perform the following.
a. Implement the display() function (Use the “0x%x” formatting specifier to print addresses in hexadecimal.)
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 29th-oct-2024
Version: 0.1v
*/
#include <stdio.h>
void display(int *ptr)
{
    printf("Address of ptr: 0x%x\n", (unsigned int)ptr);
    printf("Contents at ptr: %d\n", *ptr);
}

int main()
{
    char arr[] = "hello hi ";
    int *ptr = (int *)arr;

    printf("sizeof ptr: %zu, sizeof arr: %zu\n", sizeof(ptr), sizeof(arr));
    display(ptr); // display the address in hex and contents using pointer

    return 0;
}

/*
Refer the code snippet below. int main()
#define MAX 100
#define SUCCESS 0
#define FAILURE 1
int main()
{
char arr[MAX] = “Learning C“;
char*ptr = arr;
char appendstr[3]= “in my org”;
printf(“Address of ptr:%x”, ptr);
int ret = append(ptr, appendstr);// append the string
printf(“Address of ptr:%x”, ptr);
if (ret == SUCCESS)
{
display(ptr); // display the address in hex and contents using pointer
}
}
Perform the following.
a. Implement the append() function to append the contents of the appendstr[] to arr using pointer.
[Note: append() should only use its content and not manipulate it. Contents should be retained even after the call]
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 29th-oct-2024
Version: 0.1v
*/
#include <stdio.h>
#include <string.h>

#define MAX 100
#define SUCCESS 0
#define FAILURE 1

int append(char *ptr, const char *appendstr) {
    if (strlen(ptr) + strlen(appendstr) >= MAX) {
        return FAILURE;
    }
    strcat(ptr, appendstr);
    return SUCCESS;
}

void display(char *ptr) {
    printf("Address of ptr: 0x%x\n", (unsigned int)ptr);
    printf("Contents at ptr: %s\n", ptr);
}

int main() {
    char arr[MAX] = "Learning C";
    char *ptr = arr;
    char appendstr[] = " in my org";

    printf("Address of ptr: 0x%x\n", (unsigned int)ptr);

    int ret = append(ptr, appendstr); // append the string

    printf("Address of ptr: 0x%x\n", (unsigned int)ptr);

    if (ret == SUCCESS) {
        display(ptr); // display the address in hex and contents using pointer
    } else {
        printf("Appending string failed.\n");
    }

    return 0;
}


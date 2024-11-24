
/*
Desp:Refer the code snippet below.

int main()

{

char arr[][3] = {

sort(arr, sizeof(arr)/sizeof(arr[0]);

return 0;

}


Allow user to perform the following operations.

a. init() - initialize the array and return 0

b. search_update() – search for a given element in array and if found update it to given value and return 0 else return 1

c. display() – traverse and display array contents

For the functions, pass array and other required arguments to functions and return as per requirement

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 29th-oct-2024
Version: 0.1v
*/
#include <stdio.h>
#include <string.h>

#define ROWS 3
#define COLS 3

void init(char arr[ROWS][COLS])
{
    // Initialize the array with some values in array
    strcpy(arr[0], "ab");
    strcpy(arr[1], "cd");
    strcpy(arr[2], "ef");
}

int search_update(char arr[ROWS][COLS], const char *search, const char *update) {
    for (int i = 0; i < ROWS; i++)
        {
        if (strcmp(arr[i], search) == 0)
                {
            strcpy(arr[i], update);
            return 0;
        }
    }
    return 1;
}

void display(char arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
        {
        printf("%s\n", arr[i]);
    }
}

int main()
{
    char arr[ROWS][COLS];

    init(arr);
    printf("Array after initialization:\n");
    display(arr);

    if (search_update(arr, "cd", "xy") == 0)
        {
        printf("\nElement updated successfully.\n");
    }
        else
        {
        printf("\nElement not found.\n");
    }

    printf("Array after update:\n");
    display(arr);

    return 0;
}

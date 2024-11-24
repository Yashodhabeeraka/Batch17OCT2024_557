/*
3. Refer the code snippet below. Implement the function search_insert() as mentioned in the code.
#define MAX 80
//search for the given char and if found, then create space for 1 character and insert ‘_’ after the searched character. Let the remaining characters in the input be placed after ‘_’.
int search_insert(char name[], char search_char);
int main()
{
char name[MAX]=”ABC”;
char *ptr = name;
int ret = search_insert(name, search_char);
if (ret == SUCCESS)
{
//display updated string
}
}
FUNCTION NAME: search_insert

DESCRIPTION:  function searches for 'B' in the string, finds it, and inserts an underscore after it

RETURNS: Updated String
*/
#include <stdio.h>
#include <string.h>
#define MAX 80
#define SUCCESS 1
#define FAILURE 0

int search_insert(char name[], char search_char) {
    int len = strlen(name);
    for (int i = 0; i < len; i++) {
        if (name[i] == search_char) {
            // Shift characters to the right to make space for '_'
            for (int j = len; j > i; j--) {
                name[j + 1] = name[j];
            }
            // Insert '_'
            name[i + 1] = '_';
            return SUCCESS;
        }
    }
    return FAILURE;
}

int main() {
    char name[MAX] = "ABC";
    char search_char = 'B';
    int ret = search_insert(name, search_char);

    if (ret == SUCCESS) {
        printf("Updated string: %s\n", name);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}

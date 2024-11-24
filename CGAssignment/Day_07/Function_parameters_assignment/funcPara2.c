/*
Write a program with a function read_extract_characters()
to read a string (of max length 50 characters) from user,
extract the characters at odd indices, store in an other array and return to the call.
Caller should be able to read and display the extracted string.

[Note : do not return a local variable in function to caller]
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 08-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <string.h>

void read_extract_characters(char *input, char *output);

int main()
{
    char input[51], output[26];
    printf("Enter a string (max 50 characters): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    read_extract_characters(input, output);
    printf("Extracted characters: %s\n", output);

    return 0;
}

void read_extract_characters(char *input, char *output)
{
    int j = 0;
    for (int i = 1; i < strlen(input); i += 2)
        {
        output[j++] = input[i];
    }
    output[j] = '\0';
}
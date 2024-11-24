/*
Desp: 1. WAP to prompt and read a line of text with words separated by space. Tokenise and extract the words. Display them. Impement the following functions for this.

a. int tokenise(char *arr); //tokenise and display tokens , return number of tokens to the caller

[Use strtok() to tokenise]

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 29th-oct-2024 
Version: 0.1v
*/
#include <stdio.h>
#include <string.h>

int tokenise(char *arr) 
{
    int count = 0;
    char *token = strtok(arr, " ");
    while (token != NULL) 
	{
        printf("%s\n", token);
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}

int main() 
{
    char str[100];
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    int numTokens = tokenise(str);
    printf("Number of tokens: %d\n", numTokens);
    return 0;
}


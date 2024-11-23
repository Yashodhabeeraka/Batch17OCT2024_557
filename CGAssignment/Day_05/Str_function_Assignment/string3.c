/*
Desp: 3. WAP to

a. Search for and replace the vowel characters (upper and lower case) with “ay” in a word read from user. Consider a maximum word length of 40 characters.

b. Identify the test inputs to be used

c. Display updated string
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 29th-oct-2024
Version: 0.1v
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replace_vowels(char *str)
{
    char result[100] = "";
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
        {
        if (strchr("AEIOUaeiou", str[i]))
                {
            result[j++] = 'a';
            result[j++] = 'y';
        }
                else
                {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    strcpy(str, result);
}

int main()
{
    char word[41];
    printf("Enter a word (max 40 characters): ");
    scanf("%40s", word);
    replace_vowels(word);
    printf("Updated word: %s\n", word);
    return 0;
}

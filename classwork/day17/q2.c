#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindromicAnagram(char *str) {
    int charCount[256] = {0};
    int len = strlen(str);
    
    // Count occurrences of each character
    for (int i = 0; i < len; i++) {
        charCount[(int)str[i]]++;
    }
    
    // Check the number of characters with odd counts
    int oddCount = 0;
    for (int i = 0; i < 256; i++) {
        if (charCount[i] % 2 != 0) {
            oddCount++;
        }
    }
    
    // A string can form a palindromic anagram if at most one character has an odd count
    return oddCount <= 1;
}

int main() {
    char str1[] = "carrace";
    char str2[] = "abcdeffgh";
    
    printf("Is '%s' a palindromic anagram? %s\n", str1, isPalindromicAnagram(str1) ? "True" : "False");
    printf("Is '%s' a palindromic anagram? %s\n", str2, isPalindromicAnagram(str2) ? "True" : "False");
    
    return 0;
}


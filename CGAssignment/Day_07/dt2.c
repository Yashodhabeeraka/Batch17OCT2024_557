/* Description: To read a user choice as ‘y’ or ‘Y’ or ‘n’ or ‘N’ and display read choice as “Yes” or “No” according to the input received.
‘y’ or ‘Y’à display “Yes”
‘n’ or ‘N’à display “No”
for any other character received à display “invalid character” and exit
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 06-11-2024
Version: 0.1v
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char choice;

    printf("Enter your choice (y/Y/n/N): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        printf("Yes\n");
    } else if (choice == 'n' || choice == 'N') {
        printf("No\n");
    } else {
        printf("Invalid character\n");
        exit(1);
    }

    return 0;
}

/* Description: To read a number in decimal (0-127) and display it in 2 digit hex character.
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 06-11-2024
Version: 0.1v
 */
#include <stdio.h>

int main()
{
    int decimal;
    
    printf("Enter a decimal number (0-127): ");
    scanf("%d", &decimal);
    if (decimal < 0 || decimal > 127) 
	{
        printf("Invalid input, Please enter a number between 0 and 127.\n");
        return 1;
    }
    printf("Hexadecimal: %02X\n", decimal);
    return 0;
}


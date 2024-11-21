/*
Desc:2. Write a program to accept “N” integers from the user.
“N” also has to be taken from the user. 
Take the count of +ve numbers, -ve numbers and 0’s.
However the program should not accept a non-integer value. 
If a non-integer value is entered, used must be asked to re-enter.
[Hint:
a. Use the return value of scanf to find out whether the user has entered integer or not.
b. You also will have to clear the input buffer before taking the next input.
For clearing the input buffer, use one of the following approaches
while (getchar() != '\n'); // keep reading till newline and discard the characters
 scanf(“%*s”); // read and discard one string
]
*/

#include <stdio.h>

int main() {
int N, num;
int positive_count = 0, negative_count = 0, zero_count = 0;
int result;
     printf("Enter the number of integers (N): ");
     while (scanf("%d", &N) != 1) 
	 {
         printf("Invalid input. Please enter an integer for N: ");
         while (getchar() != '\n');
     }
     for (int i = 0; i < N; i++) 
	 {
         printf("Enter integer %d: ", i + 1);
         while ((result = scanf("%d", &num)) != 1) 
		 {
             printf("Invalid input. Please enter an integer: ");
             while (getchar() != '\n');
		 }
         if (num > 0) 
		 {
             positive_count++;
         } 
		 else if (num < 0) 
		 {
             negative_count++;
         } 
		 else 
		 {
             zero_count++;
         }
     }
     printf("Positive numbers: %d\n", positive_count);
     printf("Negative numbers: %d\n", negative_count);
	 printf("Zeros: %d\n", zero_count);
	 return 0;
}


 

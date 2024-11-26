/*
Q1.

The first line contains an integer N, denoting the total number of books.
Next, N lines contain a string that denotes "title", "author", and "genre" separated by a comma.
Note: In code stub, you get 2D array books: where the 0th column denotes the title,
      the 1st column denotes the author, and the 2nd column denotes the genre

Input:

4
The Great Gatsby,F. Scott Fitzgerald,fiction
The Diary of a Young Girl,Anne Frank,non-fiction
Harry Potter and the Philosophers Stone,J.K. Rowling,children
The Catcher in the Rye,J.D. Salinger,fiction

Output:
Harry Potter and the Philosophers Stone
The Great Gatsby
The Catcher in the Rye
The Diary of a Young Girl

Explanation

The sorted genre is: [children, fiction, fiction, non-fiction].

*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int nbooks=3;
	int row=3;
	int col=1024; //bytes
	char books[nbooks][row][col];

	//char Names[5][1024]
	strcpy(books[0][0],"Title");
	strcpy(books[0][1],"Author");
	strcpy(books[0][2],"Gener");

	printf("\nTitle: %s",books[0][0]);
	printf("\nAuthor: %s",books[0][1]);
	printf("\nGener: %s",books[0][2]);
	
	printf("\n\n");
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_LENGTH 100

// Function to compare books by genre
int compare(const void *a, const void *b) {
    char (*bookA)[3][MAX_LENGTH] = (char (*)[3][MAX_LENGTH])a;
    char (*bookB)[3][MAX_LENGTH] = (char (*)[3][MAX_LENGTH])b;
    return strcmp((*bookA)[2], (*bookB)[2]);
}

int main() {
    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    int N;
    fscanf(file, "%d\n", &N);

    // 2D array to store book information
    char books[MAX_BOOKS][3][MAX_LENGTH];

    // Read book information from the file
    for (int i = 0; i < N; i++) {
        fscanf(file, " %[^\n], %[^\n], %[^\n]", books[i][0], books[i][1], books[i][2]);
    }

    fclose(file);

    // Sort books by genre
    qsort(books, N, sizeof(books[0]), compare);

    // Print sorted books
    printf("Sorted books by genre:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", books[i][0]);
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int bottom = -1;
int top = -1;
int *stackCount; // Pointer for the stack array
int MAX; // Maximum size of the stack

int push(int v) {
    if (top == MAX - 1) {
        printf("\nStack/container is Full\n");
        return 0;
    }
    top++;
    stackCount[top] = v;
    return 0;
}

int pop() {
    int v;
    if (top == bottom) {
        printf("\nStack/container is empty\n");
        return 0;
    }
    v = stackCount[top];
    top--;
    return v;
}

void displayStack() {
    int iter;
    if (top == bottom) {
        printf("\nStack/Container is empty\n");
        return;
    }
    printf("\nStack elements are\n");
    for (iter = top; iter > bottom; iter--) {
        printf("\n%d", stackCount[iter]);
    }
    printf("\n\n");
}

int main() {
    printf("Enter the maximum size of the stack: ");
    scanf("%d", &MAX);

    // Allocate memory for the stack
    stackCount = (int *)malloc(MAX * sizeof(int));
    if (stackCount == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Example usage
    push(10);
    push(20);
    push(30);
    displayStack();
    printf("Popped: %d\n", pop());
    displayStack();

    // Free the allocated memory
    free(stackCount);

    return 0;
}


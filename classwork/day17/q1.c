#include <stdio.h>
#include <string.h>
#include <math.h>

void rearrangeString(char *M, char *D) {
    int N = strlen(M);
    int half = ceil(N / 2.0);
    int oddIndex = 0, evenIndex = 1;

    for (int i = 0; i < half; i++) {
        D[oddIndex] = M[i];
        oddIndex += 2;
    }

    for (int i = half; i < N; i++) {
        D[evenIndex] = M[i];
        evenIndex += 2;
    }

    D[N] = '\0'; // Null-terminate the string
}

int main() {
    char M[] = "aebfcgdh";
    char D[sizeof(M)];

    rearrangeString(M, D);

    printf("Output string: %s\n", D);

    return 0;
}


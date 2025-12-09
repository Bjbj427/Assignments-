#include <stdio.h>

int main() {
    int N;

    printf("Enter a positive integer (>= 2): ");
    scanf("%d", &N);

    while (N < 2) {
        printf("Invalid! Enter a number >= 2: ");
        scanf("%d", &N);
    }

    for (int i = 2; i <= N; i++) {
        printf("\nMultiplication Table of %d\n", i);

        for (int j = 1; j <= 12; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    return 0;
}

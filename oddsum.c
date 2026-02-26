#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d Even numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * 2);
    }

    printf("\n\nFirst %d Odd numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", (i * 2) - 1);
    }

    return 0;
}

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, temp, rev = 0, digit;
    int first, last, result;

    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;   // last digit

    // reverse number
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    first = rev % 10; // first digit

    result = factorial(first) * factorial(last);

    printf("Final Product = %d", result);

    return 0;
}

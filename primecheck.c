#include <stdio.h>
#include <math.h> // Required for the sqrt() function for optimization


int isPrime(int num) {

    if (num <= 1) {
        return 0;
    }


    for (int i = 2; i <= sqrt(num); i++) {

        if (num % i == 0) {
            return 0;
        }
    }


    return 1;
}

int main() {
    int A,B, temp;

    // Get the range from the user
    printf("Enter the starting number of the range: ");
    scanf("%d", &A);

    printf("Enter the ending number of the range: ");
    scanf("%d", &B);

    // In case the user enters the larger number first, swap them.
    if (A >B) {
        temp = A;
        A = B;
        B = temp;
    }

    printf("\nThe prime numbers between %d and %d are:\n", A, B);

    // Loop through every number in the given range
    for (int i = A; i <= B; i++) {
        // Call the isPrime function to check the current number
        if (isPrime(i)) {
            // If the function returns 1 (true), print the number.
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

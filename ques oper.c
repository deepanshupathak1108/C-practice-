#include <stdio.h>

int main() {
    // Declare variables to store the distance, the calculated bill, and the rate.
    int distance;
    double total_bill = 0.0;
    float rate_per_km = 0.0f;

    printf("--- Customer Travel Bill Generator ---\n");
    printf("Please enter the total distance traveled (in KM): ");
    scanf("%d", &distance);

   // criteion 1: distance is between 0 to 100km
    if (distance > 0 && distance <= 100) {
        rate_per_km = 15.0f;
    }
    // Criterion 2: Distance is between 101 and 300 KM
    else if (distance > 100 && distance <= 300) {
        rate_per_km = 12.0f;
    }
    // Criterion 3: Distance is between 301 and 500 KM
    else if (distance > 300 && distance <= 500) {
        rate_per_km = 10.0f;
    }
    // Criterion 4: Distance is above 500 KM
    else if (distance > 500) {
        rate_per_km = 8.0f;
    }
    // Handle invalid input (zero or negative distance)
    else {
        printf("\nError: The distance must be a positive number.\n");
        return 1; // Exit the program indicating an error
    }

    // --- Calculation ---
    // Calculate the total bill by multiplying the distance by the determined rate.
    total_bill = distance * rate_per_km;

    // --- Output the Generated Bill ---

    printf("        CUSTOMER BILL\n");

    printf("Distance Traveled : %d KM\n", distance);
    printf("Rate Applied      : %.2f per KM\n", rate_per_km);

    // Use %.2f to format the currency to two decimal places.
    printf("Total Bill Amount : Rs. %.2f\n", total_bill);


    return 0; // Indicate successful execution
}

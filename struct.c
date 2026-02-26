#include <stdio.h>
#include <stdlib.h> // For exit()

// 1. Define the Structure (Blueprint for a student record)
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

void main() {
    // File pointer declaration
    FILE *file_ptr;

    // Structure variable declaration
    struct Student s;

    int num_students, i;

    // 2. Open the file in Binary Write mode ("wb")
    // Use "wb" to store the raw structure data, which is more efficient.
    file_ptr = fopen("student_records.bin", "wb");

    if (file_ptr == NULL) {
        printf("🚨 Error: Could not open the file for writing.\n");
        // Exit the program if the file can't be opened
        exit(1);
    }

    printf("📚 Student Record Entry Program\n");
    printf("--------------------------------\n");

    // 3. Get the number of records to enter
    printf("Enter the number of students to record: ");
    scanf("%d", &num_students);

    // 4. Loop to read data and write each record to the file
    for (i = 0; i < num_students; i++) {
        printf("\n--- Entering Record %d ---\n", i + 1);

        // Input Roll Number
        printf("Enter Roll Number: ");
        scanf("%d", &s.roll_number);

        // Input Name (using scanf for simplicity, fgetc or fgets are safer)
        printf("Enter Name (max 49 chars): ");
        // Clear the input buffer after previous integer input
        while (getchar() != '\n');
        // Read the name including spaces, stopping at a newline character
        scanf("%[^\n]s", s.name);

        // Input Marks
        printf("Enter Marks: ");
        scanf("%f", &s.marks);

        // 5. Write the entire structure 's' to the file
        // Parameters: (&data_to_write, size_of_data, number_of_items, file_pointer)
        fwrite(&s, sizeof(struct Student), 1, file_ptr);

        printf("Record %d written to file.\n", i + 1);
    }

    // 6. Close the file
    fclose(file_ptr);
    printf("\n--------------------------------\n");
    printf("✅ All %d records have been successfully saved to 'student_records.bin'.\n", num_students);
}

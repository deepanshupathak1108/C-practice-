#include <stdio.h>
#include <stdlib.h> // For exit()

// Define the Structure exactly as it was defined in the writing program
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    FILE *file_ptr;
    struct Student s_read; // Structure variable to hold the data read from the file
    int count = 0;

    // 1. Open the file in Read Binary mode ("rb")
    file_ptr = fopen("student_records.bin", "rb");

    if (file_ptr == NULL) {
        printf("🚨 Error: Could not open the file 'student_records.bin'. Make sure it exists.\n");
        return 1;
    }

    printf("Retrieving Student Records:\n");
    printf("--------------------------------------------------\n");

    // 2. Loop using fread() to read records until the end of the file
    // fread() returns the number of items successfully read (1 if successful, 0 if EOF or error)
    while (fread(&s_read, sizeof(struct Student), 1, file_ptr) == 1) {
        // 3. Display the retrieved data
        count++;
        printf("Record #%d\n", count);
        printf("  Roll Number: %d\n", s_read.roll_number);
        printf("  Name: %s\n", s_read.name);
        printf("  Marks: %.2f\n", s_read.marks);
        printf("--------------------------------------------------\n");
    }

    // 4. Close the file
    fclose(file_ptr);
    printf("✅ Finished reading %d records from the file.\n", count);

    return 0;
}

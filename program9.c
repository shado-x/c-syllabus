// 9) Demonstrate the use of file handling

#include <stdio.h>

int main() {
    // Opening a file for writing
    FILE *file = fopen("my_file.txt", "w");

    if (file == NULL) {
        printf("Failed to open the file\n");
        return 1;
    }

    // Writing to the file
    fprintf(file, "Hello, File!\n");
    fputs("This is another line.", file);

    // Closing the file
    fclose(file);

    printf("Data written to the file.\n");

    return 0;
}

// Data written to the file.





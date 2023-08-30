// 5) Program using string handling functions

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];
    
    // Input strings from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0'; // Removing the newline character
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0'; // Removing the newline character
    
    // String length
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("\nLength of the first string: %d\n", len1);
    printf("Length of the second string: %d\n", len2);
    
    // String copy
    strcpy(str3, str1);
    printf("\nCopying str1 to str3.\n str3 = '%s'\n",str3);
    strcat(str3, str2);
    printf("\nConcatenating str3 with str2. str3 = %s\n", str3);
    
    // String comparison
    int compareResult = strcmp(str1, str2);
    if (compareResult == 0) {
        printf("\nThe strings are equal.\n");
    } else if (compareResult < 0) {
        printf("\nThe first string is lexicographically smaller.\n");
    } else {
        printf("\nThe second string is lexicographically smaller.\n");
    }
    
    // String searching
    char searchChar;
    printf("\nEnter a character to search for in str3 : ");
    scanf("%c", &searchChar);
    
    char *position = strchr(str3, searchChar);
    if (position != NULL) {
        printf("Character '%c' found at index: %ld\n", searchChar, position - str3);
    } else {
        printf("Character '%c' not found in the first string.\n", searchChar);
    }
    
    return 0;
}



// Enter the first string: Sun
// Enter the second string: Rise

// Length of the first string: 3
// Length of the second string: 4

// Copying str1 to str3.
//  str3 = 'Sun'

// Concatenating str3 with str2. str3 = SunRise

// The second string is lexicographically smaller.

// Enter a character to search for in str3 : i
// Character 'i' found at index: 4






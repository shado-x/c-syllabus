// 3) Program using looping statements (also demonstrate the use of break and continue statement

#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        if (i == 7) {
            break;
        }
        printf("Count %d\n", i);
    }
    return 0;
}

// Count 0
// Count 1
// Count 2
// Count 3
// Count 4
// Count 6





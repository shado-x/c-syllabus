// 4) Program using single dimensional and multi dimensional arrays

#include <stdio.h>

int main() { 
    // 1D Array --------------------------------------------
    int d1[4];
    int x = 5;
    printf("1D Array --------------\n");
    for (int i = 1; i < 5; i++) {
        d1[i] = x;
        x++;
    }

    for (int j = 1; j < 5; j++) {
        printf(" %d ",d1[j]);  
    }
    printf("\n-----------------------\n\n");


    // 2D Array --------------------------------------------
    int d2[3][3];
    int y = 1;
    printf("2D Array --------------\n");
    for (int m = 1; m < 4; m++) {
        for (int n = 1; n < 4; n++) {
            d2[m][n] = y;  
            y++;
        }
    }
    for (int m = 1; m < 4; m++) {
        for (int n = 1; n < 4; n++) {
            printf("%d ", d2[m][n]);
        }
        printf("\n");
    }

    printf("-----------------------\n\n");
    return 0;
}


// 1D Array --------------
//  5  6  7  8 
// -----------------------

// 2D Array --------------
// 1 2 3 
// 4 5 6 -
// 7 8 9 
// -----------------------











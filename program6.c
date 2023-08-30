#include <stdio.h>

int fact(int num) {
    if ( num == 0 )
        return 1;
    else
        return num * fact(num - 1);
}

int main() {
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("\nFactorial of %d is %d.\n",a,fact(a));
    return 0;
}

// Enter a number 4

// Factorial of 4 is 24.

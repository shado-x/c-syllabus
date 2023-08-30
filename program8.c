// 8) Demonstrate the use of Pointers
#include <stdio.h>

int main() {
    int num = 40;
    int *ktr;

    // assigning value to the memory location
    // variable = memo loc
    // &num is similair to a ptr
    
    ktr = &num;
    printf("\n%d is in the memory location %p.\n",num,ktr);
    
    // replace - memory - where pointer (*ktr) points
    *ktr = 100;
    printf("\nUsing pointer to add %d in the memory location %p.\n",num,ktr);
    return 0;
}

// 40 is in the memory location 0x7ffdef4b7b04.
// Using pointer to add 100 in the memory location 0x7ffdef4b7b04.









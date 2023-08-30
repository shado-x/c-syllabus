// 7) Demonstrate the use of Structure and Union

#include <stdio.h>
#include <string.h>

struct student {
    int regno;
    char name[50];
    char dept[10];
}; //struct ends with a semi colan


union student2 {
    int regno;
    char name[50];
    char dept[10];
};

int main() {

    struct student one;
    struct student two;
    union student2 three;
    union student2 four;

    one.regno=1;
    strcpy(one.name,"John");
    strcpy(one.dept,"MCA");

    two.regno=2;
    strcpy(two.name, "Jane");  
    strcpy(two.dept, "CS");

    // Union Stores all values in the same location 
    // So, the value of all three below values will be the last values
    // ==> three.regno = three.name = three.dept = "MCA" (last assigned value on the union's memory location)
    three.regno = 1;
    strcpy(three.name, "John");
    strcpy(three.dept, "MCA");

    four.regno = 2;
    strcpy(four.name, "Jane");
    strcpy(four.dept, "CS"); 

    printf("\n\n Structure \n");
    printf("{%d, %s, %s}\n", one.regno, one.name, one.dept);
    printf("{%d, %s, %s}", two.regno, two.name, two.dept);
    printf("\n\n");

    printf("\n\n Union \n");
    printf("{%d, %s, %s}\n", three.regno, three.name, three.dept);
    printf("{%d, %s, %s}", four.regno, four.name, four.dept);
    printf("\n\n");
    return 0;
}



//  Structure 
// {1, John, MCA}
// {2, Jane, CS}

//  Union 
// {4277069, MCA, MCA}
// {1694520131, CS, CS}


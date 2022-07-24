#include <stdio.h>

void swap(int *p_a, int *p_b) {

    // When used in a function declaration or defintion, 
    // * acts as part of a pointer declarator indicating that the parameter is a pointer
    // to an object or function of a specific type
    int t = *p_a;

    *p_a = *p_b;
    // The above line dereferences pointer p_b,
    // reads the referenced value,
    // dereferences the pointer p_a, 
    // and then overwrites the value at the location 
    // referenced by p_a with the value referenced at p_b

    // Finally we assign the ref to p_b to int t (temp)
    *p_b = t;


}

int main(void) {
    int a = 21;
    int b = 17;

    printf("a=%d\nb=%d\n", a, b);

    // the & is the `address-of` operator, which generates a pointer
    // to its operand. This change is necessary because the swap function
    // now accepts pointers to objects of type int as parameters
    // instead of simply values of type int
    swap(&a, &b);
    puts("swapping!");

    printf("a=%d\nb=%d\n", a, b);

    return 0;
}
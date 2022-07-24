#include <stdio.h>

// object exists for lifetime of entire program
// this is called static storage duration
int a = 4;

void doesNothing(int b) {
    // b as an object exists for the lifetime of the func decl/invocation
}

void increment(void) {
    // a block level var that has static storage duration
    // these objects persists in mem after the fn has exited
    static int count = 0; 
    count++;
    printf("count is %d\n", count);
}

int main(void) {
    increment(); // count is 1
    increment(); // count is 2
    increment(); // count is 3
}
#include <stdio.h>

int a = 22; // file level scope accessible anywhere;

void echoSomeCatch(int b); // b has function prototype scope, not available elsewhere to be used

void echoSomeCatch(int b) { // b has block scope here in that its use is scoped to the function body
    printf("That's some catch, that catch %d\n", b);
};

int main(void) {
    int c = 24; // another block level scope
    echoSomeCatch(22);
    return 0;
}
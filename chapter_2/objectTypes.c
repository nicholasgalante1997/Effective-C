#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

// Booleans

// these are programmatically identical
// but semantically different
_Bool falseFlag = 0; 
bool anotherFalseFlag = false;

bool trueFlag = 1;
_Bool anotherTrueFlag = true;

// Character Types

// 3 differing types - char, signed char, unsigned char
char characterVariable = 'V';

// Integer Types

int signed x = -44; // can be positive, negative, or 0
int unsigned y = 31; // positive or 0

// Enum Types

enum day { sun, mon, tue, wed, thu, fri, sat }; 
enum cardinal_points { north = 0, east = 90, south = 180, west = 270 };

// Floating Point Types (floats, doubles, long doubles)

float f = 1.4;

double e = 0.01166;

long double g = 4e-11;

// Function Types

// Function Declarators

// the function declarator to specify the name of the function and the return type. 
// If the declarator includes a parameter type list and a definition, 
// the declaration of each parameter must include an identifier, 
// except parameter lists with only a single parameter of type void, 
// which needs no identifier.

int s(void); 
int * fip(); // returns a ref/pointer of type int
void t(int i, int j); 
void u(int, int);

int main(void) {
    printf("Program Compilation Complete");
}
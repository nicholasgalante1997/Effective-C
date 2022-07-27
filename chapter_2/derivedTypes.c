#include <stdio.h>
#include <string.h>

// Derived Types
// types that are constructed from other types,
// these include pointers, arrays, type definitions, structures, and unions

int main(void) {
    // Pointer Types

    // A pointer type is derived from the function or object type 
    // that it points to, called the referenced type. 
    // A pointer provides a reference to an entity of the referenced type.


    // int *ip; pointer to an int type, dupe below
    char *cp; // pointer to a char type
    void *vp; // pointer to a void type

    int i = 17; // i is of type int
    int *ip = &i; // creating a var that is a pointer to an int type (i)

    // Array Types

    int ia[11]; // array of type int, 11 elements long
    float *afp[17]; // array of type 'pointer to float' of size 17 elements

    // using [] to access an el in an array

    char str[11];

    for (unsigned int i = 0; i < 10; ++i) {
        str[i] = '0' + i;
    } // '0','1','2','3','4'...'9'
    // final char is a null char '\0'
    str[10] = '\0';

    // Structure Types

    struct sigrecord {
        int signum;
        char signame[20];
        char sigdesc[100];
    } sigline, *sigline_p;

    sigline.signum = 5;
    strcpy(sigline.signame, "SIGINT");
    strcpy(sigline.sigdesc, "Interrupt from keyboard.");

    sigline_p = &sigline;

    sigline_p->signum = 5;
    strcpy(sigline_p->signame, "SIGINT");
    strcpy(sigline_p->sigdesc, "Interrupt from keyboard.");

    // Union Types

    union { 
        struct { 
            int type; 
        } n; 
        struct { 
            int type; 
            int intnode; 
        } ni; 
        struct { 
            int type; 
            double doublenode; 
        } nf; 
    } u; 

    u.nf.type = 1; 
    u.nf.doublenode = 3.14;

    // Tags

    struct S {
        int type;
    };

    struct S v; // instance of struct S

    struct S *p; // pointer to struct S


    printf("Program Compilation Complete");
}
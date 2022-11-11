/** lab31-1.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 31
* ===========================================================  */

#include "lab31functs.h"

int main() {

    // Using recursion, implement the function powerN() which calculates the
    // value of a base number raised to the power of the exponent. The prototype
    // for the powerN() each function is provided in the lab31functs.h file.
    
    // NOTE:  You must use recursion, and you cannot use any standard library functions
    int base = 2;
    for (int i = 0; i <= 10; ++i) {
        printf("%d^%d = %d\n", base, i, powerN(base, i));
    }
    
    return 0;
}

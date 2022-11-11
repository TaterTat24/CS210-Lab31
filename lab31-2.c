/** lab31-2.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 31
* ===========================================================  */

#include "lab31functs.h"

int main() {

    // Using recursion, implement the function count_char(). This function counts the
    // occurrences of the provided character parameter c, in the character array parameter
    // str[].

    // Before you start think through the appropriate base and recursive cases.
    char exampleStr[] = "banana banana banana banana banana";
    char searchChar = 'a';

    printf("There are %d occurrences of the character %c in the string:\n%s\n",
            count_char(exampleStr, searchChar), searchChar, exampleStr);
    
    return 0;
}

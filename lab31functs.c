/** lab31functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 31
* ===========================================================  */

#include "lab31functs.h"
#include <string.h>
#include <math.h>

/** ----------------------------------------------------------
 * @fn int powerN(int base, int exp)
 * @brief Calculates the value of the base number raised to the exponent
 * @param base is the base number
 * @param exp is the exponent
 * @return the value of base^exponent
 * ----------------------------------------------------------
 */
int powerN(int base, int exp) {
    if (exp == 0){
        return 1;
    }
    else {
        return base * powerN(base, exp - 1);
    }
}

/** ----------------------------------------------------------
 * @fn int count_char(char str[], char c)
 * @brief Counts the number of characters in str[] that match c
 * @param str is the character array to search
 * @param c is the search character
 * @return the number of characters matching c in str[]
 * ----------------------------------------------------------
 */
int count_char(char str[], char c) {
    if (str[0] == '\0'){
        return 0;
    }
    else {
        if (str[0] == c) {
            return 1 + count_char(&str[1], c);
        }
        else {
            return 0 + count_char(&str[1], c);
        }
    }
}

/** ----------------------------------------------------------
 * @fn int count_num(int array[], int x, int i, int len)
 * @brief Counts the number of ints in array[] that match x
 * @param array is an array of integers to be searched
 * @param x is the int value to be searched for
 * @param len is the number of values in the array
 * @return the number of integers in array[] matching x
 * ----------------------------------------------------------
 */
int count_num(int array[], int x, int len) {
    if (len == 0) {
        return 0;
    }
    else {
        if (array[0] == x) {    
            return 1 + count_num(&array[1], x, len-1);
        }
        else {
            return 0 + count_num(&array[1], x, len-1);
        }
    }
}

/** ----------------------------------------------------------
 * @fn void reverse_print(char str[])
 * @brief Prints the character array str[] in reverse
 * @param str is the character array
 * @return none, only prints the input parameter in reverse
 * ----------------------------------------------------------
 */
void reverse_print(char str[]) {
    if (str[0] == '\0') {
        return;
    }
    else {
        reverse_print(&str[1]);
        printf("%c", str[0]);
    }
}

/** ----------------------------------------------------------
 * @fn int fibonacci(int N)
 * @brief Recursively calculates the value of fibonacci at N
 * @param N is the input parameter
 * @return the int value of fibonacci(N)
 * ----------------------------------------------------------
 */
 int fibonacci(int N) {
    if (N == 0) {
        return 0;
    }
    if (N == 1) {
        return 1;
    }
    else {
        return fibonacci(N-1) + fibonacci(N-2);
    }
 }
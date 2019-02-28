/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  learn how to use pointers
 *
 *        Version:  1.0
 *        Created:  02/28/2019 08:49:09 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int i = 7;
    int* pi = &i; // It can store address of integer variables

    PrintValues(i, &i); // use the address of the variable
    // Modify i
    i *= 2;
    PrintValues(i, pi); // use the pointer to the variable
    // Change value via the pointer
    *pi = 99; // use derefeerence operator to update value at the address
    PrintValues(i, pi); // use the pointer to the variable

    return 0;
}
// Function Definitions



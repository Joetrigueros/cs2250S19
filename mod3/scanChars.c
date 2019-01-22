/*
 * =====================================================================================
 *
 *       Filename:  scanChars.c
 *
 *    Description:  take multiple chars as input
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:40:53 AM
 *       Revision:  none
 *       Compiler:  gcc scanChars.c -o scanChars.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Main Function
int main()
{
    char cIn;
    printf("Enter a character: ");
    scanf(" %c", &cIn);
    printf("You entered [%c]\n", cIn);
   
    // Note; When capturing chars, use an extra space
    // in your scanf function. e.g. " %c"
    // this will help commpile
    printf("Enter a character: ");
    scanf(" %c", &cIn);
    printf("You entered [%c]\n", cIn);
    return 0;
}
// Function Definitions



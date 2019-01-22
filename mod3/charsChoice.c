/*
 * =====================================================================================
 *
 *       Filename:  charsChoice.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/22/2019 10:12:18 AM
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
    char letter;
    printf("Enter the grade you want for this class\n");
    printf("Your choices are: 'A'\t'B'\t'C'\n");
    printf("\t\t'D' or 'F' :  \n");
    scanf("%c", &letter);
   
    if(letter == 'A')
    {
        printf("You need to get >= 94 pints\n");
    }
    printf("To get an [%c], you need the following grade:\n", letter);


    return 0;
}
// Function Definitions



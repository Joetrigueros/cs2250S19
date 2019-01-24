/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:57 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringsFunc.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <strings.h>    //For string manipulation operations


// Main Function
int main()
{
    char first[50];
    char last[50];
    char fullName[100];
    // 1) User input of first name
    printf("Enter your first and last name: ");
    scanf("%s %s", first, last);
    printf("Hi [%s] [%s]\n", first, last);
    strcpy(fullName, first);
    printf("Your Full name is: [%s]\n", fullName);
    return 0;
}
// Function Definitions



/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  learn you use strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:50 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -o strings.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

const int SIZE = 50;
// Main Function
int main()
{
    //A string is a list/collection of characters (array)
    //Strings use %s as the placeholder
    char fName[SIZE];
    unsigned int long age;   // For unsigned use the %lu, or %llu
    char lName[SIZE];
    printf("please enter your fname (< %d characters, No space) : ", SIZE);
    //When useing arrays, do not include the '&' operator in
    //your scanf
    scanf("%s", fName);
    
    printf("Enter your age: ");
    scanf("%lu", &age);
    
    printf("please enter your lname (< %d characters, No space) : ", SIZE);
    scanf("%s", lName);

    printf("Hi [%s][%s] your age is [%lu] \n", fName, lName, age);
    return 0;
}
// Function Definitions



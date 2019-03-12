/*
 * =====================================================================================
 *
 *       Filename:  use_employee.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/12/2019 10:15:09 AM
 *       Revision:  none
 *       Compiler:  gcc use_employee.c employee.c -o use_employee.out -lm
 *          Usage:  ./use_employee.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"
// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{

    Employee waldo;

    CreateEmployee(&waldo);
    CalcPay(&waldo);
    DisplayEmp(&waldo);
    return 0;
}
// Function Definitions



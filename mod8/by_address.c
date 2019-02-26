/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  learn how to
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:42:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void DisplayOrigPosition(const double* x, const double* y);
void UpdatePosition(double* x, double* y, double new_x, double new_y);
void ResetPosition(double* x, double* y);
// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    if(argc != 3)
    {

        printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
        return 1;
    }
    x = atof(argv[1]); // convert the first input param to double
    y = atof(argv[2]); // convert the second input param to double
    DisplayOrigPosition(&x, &y); // takes two addresses of type double
    UpdatePosition(&x, &y, 2.0, 4.1);
    DisplayOrigPosition(&x, &y); // takes two addresses of type double
    ResetPosition(&x, &y);  //Reset values to origin
    DisplayOrigPosition(&x, &y); // takes two addresses of type double





    return 0;
}
// Function Definitions
// ,cfu

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayPosition
 *  Description:  Display current point position
 *  Param: x => x coordinate
 *  Param: y => y coordinate
 *  Returns: Nothing
 * =====================================================================================
 */
void DisplayPosition(double x, double y)
{
    printf("Your current position is (%4.2lf,%4.2lf)\n", x, y);
    printf("Your current position address is (%p,%p)\n", &x, &y);
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayOrigPosition
 *  Description:  Display current point position of actual values
 *  Param: x => x coordinate address
 *  Param: y => y coordinate address
 *  Returns: Nothing
 * =====================================================================================
 */
void DisplayOrigPosition(const double* x, const double* y)
{
    // To display the values of pointers/address use the
    // dereference operator "*". This only applies to pointers
    // when dealing with pointers value uses the dereference operator
    printf("Your current position is (%4.2lf,%4.2lf)(orig)\n", *x, *y);
    printf("Your current original address is (%p,%p)(orig)\n", x, y);
    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePosition
 *  Description:  Update point position to a new position
 *  Param: x => x coordinate
 *  Param: y => y coordinate
 *  Param: new_x => new x coordinate
 *  Param: new_y => new y coordinate
 *  Returns: Nothing
 * =====================================================================================
 */
void UpdatePosition(double* x, double* y, double new_x, double new_y)
{
    printf("*****Updateing postion*****\n");
    *x = new_x; // Dereference the pointer to update the value
    *y = new_y;

    return;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:   ResetPosition
 *  Description:   Reset point position to origin (0,0)
 *  Param: x => x coordinate
 *  Param: y => y coordinate
 *  Returns: Nothing
 * =====================================================================================
 */
void ResetPosition(double* x, double* y)
{
    printf("*****Reseting postion*****\n");
    *x = 0; // Dereference the pointer to update the value
    *y = 0;

    return;
}

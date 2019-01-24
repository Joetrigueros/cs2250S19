/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:51:39 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double PI = 3.14159;
// Function Prototypes

// Main Function
int main()
{
    double radius, theta, x_pos, y_pos;
    // 1) Capture user input for radius and theta angle (degrees)
    printf("Enter your radius: ");
    scanf("%lf", &radius);
    printf("Enter your theta angle in degrees: ");
    scanf("%lf", &theta);
    // 2) Convert the theta angle to radians
    theta = (theta * PI / 100.0);
    // 3) Calculate your cartesian coordinates
    x_pos = radius * cos(theta);
    y_pos = radius * sin(theta);
    // 4) Print your result
    printf("Your Cartesian Coordinates, x = [%lf], y = [%lf]\n",
            x_pos, y_pos);
    return 0;
}
// Function Definitions



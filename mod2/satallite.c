/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  calculate altitude of Satallite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:47:27 AM
 *       Revision:  none
 *       Compiler:  gcc satallite.c -o satallite.out -lm
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double GRAVITY = 6.67e-11; //Newton's constant (m^ 3 kg^ -1 s^ -2)
const double E_MASS = 5.97e24; // Earth's Mass (kg)
const double E_RADIUS = 6371e3; // Earth's Radius (meters)
const double PI = 3.1415941; // PI
// Main Function
int main()
{
    double period = 0;
    long double height= 0;
    // 1) Enter the period (time) in seconds
    printf("Enter the period (T) in seconds:");
    scanf("%lf\n", &period);
    //Calculate  Height = [(G M T^ 2)/4PI^ 20]^1/3-R
//    height = (GRAVITY * E_MASS * pow(time,2));
//    height = (height / 4*pow(PI,2));
//    height = cbrt(height);
//    height = height - E_RADIUS;
   height = cbrt((GRAVITY * E_MASS * pow(period,2))/(4*pow(PI,2)))-E_RADIUS;
    // Display result: ex: 86400 seconds -> 35855 km
    printf("Your satellite after %lf sec is %Lf km from earth\n",
        period, height/1000);

    return 0;
}
// Function Definitions



/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  calculate the quadrant based on input angle
 *                  Quadrant I:angle between 0 and 90
 *                  Quadrant II:angle between 90 and 190
 *                  Quadrant III:angle between 180 and 270
 *                  Quadrant IV:angle between 270 and 360
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:35:05 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -0 angle.out
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
   int angle;
    printf("Please enter an angle: ");
   scanf("%d", &angle);
   if (angle>0 && angle < 90)
   {
       printf("\nThe angle is in quadrant I\n");
   }
   else if (angle>90 && angle < 180)
   {
       printf("\nThe angle is in quadrant II\n");
   }
   else if (angle>180 && angle < 270)
   {
       printf("\nThe angle is in quadrant III\n");
   }
   else if (angle>270 && angle < 360)
   {
       printf("\nThe angle is in quadrant IV\n");
   }

       return 0;
}
// Function Definitions



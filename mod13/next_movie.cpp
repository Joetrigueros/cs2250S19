/*
 * =====================================================================================
 *
 *       Filename:  next_movie.cpp
 *
 *    Description:  Continue to use the MOvie library
 *
 *        Version:  1.0
 *        Created:  04/09/2019 08:40:56 AM
 *       Revision:  none
 *       Compiler:  (C++):  g++ next_movie.cpp -o next_movie..out
 *          Usage:  ./next_movie.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//For C++ Code
#include <iostream>
#include "Movie.h"
using namespace std;

// Main Function
int main(int argc, char* argv[])
{
    // Create object with default values
    Movie m1;
    m1.info();
    // Create object with some values
    Movie m2("Rambo", 1991, 5);
    m2.info();
    // Creat object with one set value, and a default value
    Movie m3("Superman", 1987, 3 );
    m3.info();

    return 0;
}
// Function Definitions



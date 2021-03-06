/*
 * =====================================================================================
 *
 *       Filename:  first_real_class.cpp
 *
 *    Description:  Let's change the structure to class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 08:55:31 AM
 *       Revision:  none
 *       Compiler (C):    gcc first_real_class.cpp -o first_real_class.cpp.out
 *       Compiler (C++):  g++ first_real_class.cpp -o first_real_class.cpp.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//For C++ Code
#include <iostream>
#include <iomanip>  // more cout options
#include <string>  // for strings
#include <vector>  // for vectors "arrays with lots of features"
#include "Movie.h"
using namespace std;
// Constants and Globals

// Main Function
int main(int argc, char* argv[])
{
    cout << "the movie list Program" << endl << endl
        << "Enter a movie ..." << endl << endl;
    // Get movies from user
//    Movie movies[10]; // an array of 10 movies. Fixed to 10 spots
      vector<Movie> movies;  // define a vector of movies. Grow on demand
      char another = 'y';
      // loop for entries
      while(tolower(another) == 'y')
      {
          Movie movie;
          string title;
          int year;
          // Get user input
          cout << "Title: ";  // get title
          getline(cin, title);
          movie.set_title(title);
          cout << "Year: ";  // get year
          cin >> year;
          movie.set_year(year);
          // Add it to the vector
          movies.push_back(movie);

          cout << endl << "Enter another movie? (y|n): ";
          cin >> another;
          cin.ignore();  // ignore anything else in the buffer
          cout << endl;
      } // end of while loop
      // Display movies
      const int w = 10;
      cout << left
          << setw(w*3) << "TITLE"
          << setw(w) << "YEAR" << endl;
      for(Movie movie : movies)  // looping for vector
      {
          cout << setw(w*3) << movie.get_title()
              << setw(w) << movie.get_year() << endl;
      }
      cout << endl;

    return 0;
}

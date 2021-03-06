/*
 * =====================================================================================
 *
 *       Filename:  Movie.h
 *
 *    Description:  Movie Class Declaration
 *
 *        Version:  1.0
 *        Created:  04/04/2019 09:39:57 AM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  MOVIE__INC__
#define  MOVIE_INC__

#include <iostream>
#include <string>
using namespace std;

class Movie
{
    // Only the member has access to data members are private
    private:
        string title;
        int year;
        int stars;
        // Anyone has access to it. Member functions are public
        string to_upper(std::string);
    public:
        // Constructors
        Movie(string title = "", int year = 1988, int stars = 0);
        // Destructor
        ~Movie();
        // "Setters"
        void set_title(string set_title);
        void set_year(int year);
        void set_stars(int stars);
        // "Getters"
        string get_title()const;
        int get_year()const;
        int get_stars() const;
        // Other
        void info() const;
        bool iequals(const Movie&);

}; // end of Movie class


#endif /* ----- #ifndef MOVIE__INC__ ----- */

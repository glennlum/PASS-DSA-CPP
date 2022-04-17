#ifndef __GUARDED_HPP
#define __GUARDED_HPP

#include <string>

using namespace std;

/*We IMPORT this in netflix_3.cpp */

class Movie
{
public:
    Movie();
    Movie(string title, double rating);
    string getTitle();
    void setTitle(const string &title);
    double getRating();
    void setRating(const double &rating);

private:
    string title;
    double rating;
};

#endif
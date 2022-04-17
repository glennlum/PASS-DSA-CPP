#include "Movie.hpp"
// IMPORT the Movie header file (.hpp)

Movie::Movie()
{
    // set default values
    this->title = "none";
    this->rating = 0;
}

Movie::Movie(string title, double rating)
{
    setTitle(title);
    setRating(rating);
}

string Movie::getTitle()
{
    return title;
}

void Movie::setTitle(const string &title)
{
    // title is 100 chars or less
    if (title.length() <= 100)
    {
        this->title = title;
    }
}

double Movie::getRating()
{
    return rating;
}

void Movie::setRating(const double &rating)
{
    // rating within acceptable range
    if (rating > 0 && rating <= 5)
    {
        this->rating = rating;
    }
}

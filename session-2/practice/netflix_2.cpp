#include <iostream>
#include <string>

using namespace std;

/*
Netflix : "Here are the movies I recommend!"
- Snakes on a Plane, 4.5
- No Country for Old Men, 5.0
- Kill Bill, 3.5
*/

// Movie is ENCAPSULATED in a class
class Movie
{
public:
    Movie()
    {
        // set default values
        this->title = "none";
        this->rating = 0;
    }

    Movie(string title, double rating)
    {
        setTitle(title);
        setRating(rating);
    }

    string getTitle()
    {
        return title;
    }

    void setTitle(const string &title)
    {
        // title is 100 chars or less
        if (title.length() <= 100)
        {
            this->title = title;
        }
    }

    double getRating()
    {
        return rating;
    }

    void setRating(const double &rating)
    {
        // rating within acceptable range
        if (rating > 0 && rating <= 5)
        {
            this->rating = rating;
        }
    }

private:
    string title;
    double rating;
};

void showAllReccomendations(Movie *listOfMovies, int size);

int main(void)
{
    /* CLASSES */
    // Representing movie data using an ABSTRACTION

    Movie movie_1("Snakes on a Plane", 4.5);
    Movie movie_2("No Country for Old Men", 5.0);
    Movie movie_3("Kill Bill", 3.5);
    // instantiate movie objects
    Movie reccomendations[] = {movie_1, movie_2, movie_3};
    // Array structures movie objects in a 'list'
    // Data is packaged in a logical structure that the program can exploit
    int listSize = sizeof(reccomendations) / sizeof(reccomendations[0]);
    showAllReccomendations(reccomendations, listSize);
    // method takes the array as argument

    return 0;
}

void showAllReccomendations(Movie *listOfMovies, int size)
{
    cout.precision(2);
    for (int i = 0; i < size; i++)
    {
        cout << "Title: " << listOfMovies[i].getTitle()
             << ", Rating: " << listOfMovies[i].getRating() << endl;
    }
}

/*
Why was this function not used?
This function is returning an incorrect result that I
do not yet understand. I will omit it for now.

int returnListSize(Movie *listOfMovies)
{
    // calculate array size
    return sizeof(*listOfMovies) / sizeof(listOfMovies[0]);
}
*/

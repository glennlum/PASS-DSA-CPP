#include <iostream>
#include <string>

using namespace std;

/*
Netflix : "Here are the movies I recommend!"
- Snakes on a Plane, 4.5
- No Country for Old Men, 5.0
- Kill Bill, 3.5
*/

// ABSTRACTION of a movie
struct Movie
{
    string title;
    float rating;
};

void showReccomendation(string title, float rating);
void showAllReccomendations(Movie *listOfMovies);
int returnListSize(Movie *listOfMovies);

int main(void)
{
    /* VARIABLES */
    // Representing movie data with disparate variables

    string title_1 = "Snakes on a Plane";
    float rating_1 = 4.5;
    string title_2 = "No Country for Old Men";
    float rating_2 = 5.0;
    string title_3 = "Kill Bill";
    float rating_3 = 3.5;
    showReccomendation(title_1, rating_1);
    showReccomendation(title_2, rating_2);
    showReccomendation(title_3, rating_3);
    // Notice any limitations?

    /* STRUCTS */
    // Representing movie data using an ABSTRACTION

    Movie movie_1 = {"Snakes on a Plane", 4.5};
    Movie movie_2 = {"No Country for Old Men", 5.0};
    Movie movie_3 = {"Kill Bill", 3.5};
    // structs create meaningful logical groupings
    Movie reccomendations[] = {movie_1, movie_2, movie_3};
    // Array structures movies in a 'list'
    // Data is packaged in a logical structure that the program can exploit
    showAllReccomendations(reccomendations);
    // Method takes a single array as argument
    // What are the limitations of a struct?

    return 0;
}

void showReccomendation(string title, float rating)
{ 
    cout.precision(2); // show 2 decimal places
    cout << "Title: " << title << ", Rating: " << rating << endl;
}

void showAllReccomendations(Movie *listOfMovies)
{
    int size = returnListSize(listOfMovies);
    cout.precision(2);
    for (int i = 0; i < size; i++)
    {
        cout << "Title: " << listOfMovies[i].title 
        << ", Rating: " << listOfMovies[i].rating << endl;
    }
}

int returnListSize(Movie *listOfMovies)
{
    // calculate array size
    return sizeof(*listOfMovies) / sizeof(listOfMovies[0]);
}

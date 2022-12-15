#include <iostream>

using namespace std;

class Movie
{
private:
  string rating;

public:
  string title;
  string director;
  Movie(string aTitle, string aDirector, string aRating)
  {
    title = aTitle;
    director = aDirector;
    rating = aRating;
  }
  void setRating(string aRating)
  {
    if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
    {
      rating = aRating;
      return;
    }

    rating = "NR";
  }

  string getRating()
  {
    return rating;
  }
};

int main()
{
  Movie movie("The Avengers", "Joss Whedon", "PG-13");

  cout << movie.getRating() << endl;
  movie.setRating("Dog");
  cout << movie.getRating() << endl;
  return 0;
}
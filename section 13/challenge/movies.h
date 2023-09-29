#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <string>
#include <vector>
#include "movie.h"

class Movies{
private:
    std::vector <Movie> movie_collection;

public:

    Movies(); /* Init method*/
    Movies(const Movies &source); /*Copy method*/

    std::vector<Movie> get_collcection();


    void addOneMovie(std::string name, std::string rating, int watch);
    void watching(std::string name);
    void DisplayMovies();


     /*Deconstructer deleting object*/
    ~Movies();
};

#endif
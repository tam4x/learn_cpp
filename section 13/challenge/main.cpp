#include "movie.h"
#include "movies.h"
#include <iostream>
#include <string>
#include <vector>

int main(){
    Movies collection{};
    collection.addOneMovie("Herr der Ringe", "PG-13", 0);
    collection.addOneMovie("Star Wars", "PG-13", 0);
    collection.addOneMovie("Harry Potter", "PG-13", 0);
    collection.addOneMovie("One Piece", "PG-13", 0);
    collection.DisplayMovies();
    collection.watching("Herr der Ringe");
    collection.addOneMovie("Herr der Ringe", "PG-13", 0);
    collection.DisplayMovies();

    return 0;
}
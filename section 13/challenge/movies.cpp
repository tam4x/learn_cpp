#include "movie.h"
#include "movies.h"
#include <iostream>
#include <string>
#include <vector>


Movies::Movies(){
    
} /* Init method*/

Movies::Movies(const Movies &source){

} /*Copy method*/

std::vector<Movie> Movies::get_collcection(){
    return movie_collection;

}



void Movies::addOneMovie(std::string name, std::string rating, int watch){
    int dec = 0;
    for(auto &movie: movie_collection){
        if (movie.Name == name){
            dec = 1;
            std::cout << "Film is already in movie collection, the watching number will be increased instead" << std::endl;
            movie.watched +=1;
        }
        else{
            continue;
        }
    }
    if (dec == 0){
        movie_collection.push_back(Movie {name,rating,watch});
    }
    
}

void Movies::watching(std::string name){
    for(auto &movie: movie_collection){ 
        if (movie.Name == name){
            movie.watched +=1;
        }
        else{
            continue;
        }
    }
}

void Movies::DisplayMovies(){
    std::cout << "This is your movies list:" << std::endl;
    for(auto movie: movie_collection){
        std::cout << movie.Name << "\t" << movie.Rating << "\t" << movie.watched << std::endl;
    }
}


Movies::~Movies(){}/*Deconstructer deleting object*/
#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>
#include <vector>
class Movie{
private:
    friend class Movies; 
    std::string Name;
    std::string Rating;
    int watched;

public:
    Movie(std::string name = "None", std::string rating = "None", int watch = 0); /* Init method*/
    Movie(const Movie &source); /*Copy method*/
    Movie(Movie &&source) noexcept; /*Move constr*/

    void set_name(std::string name);
    std::string get_name();

    void set_rating(std::string rating);
    std::string get_rating();

    void set_watched(int watch);
    int get_watched();


    ~Movie();/*Deconstructer deleting object*/
};

#endif
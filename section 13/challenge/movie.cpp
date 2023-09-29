#include "movie.h"
#include <iostream>
#include <string>
#include <vector>

Movie::Movie(std::string name, std::string rating, int watch)
{
 Name = name;
 Rating = rating;
 watched = watch;
}

Movie::Movie(const Movie &source)
:Name{source.Name}, Rating{source.Rating}, watched{source.watched}
{

}

Movie::Movie(Movie &&source) noexcept
:Name{source.Name}, Rating{source.Rating}, watched{source.watched}
{

}

void Movie::set_name(std::string name){
    Name = name;
}

std::string Movie::get_name(){
    return Name;
}

void Movie::set_rating(std::string rating){
    Rating = rating;
}

std::string Movie::get_rating(){
    return Rating;
}

void Movie::set_watched(int watch){
    watch = watch;
}

int Movie::get_watched(){
    return watched;
}

Movie::~Movie(){}
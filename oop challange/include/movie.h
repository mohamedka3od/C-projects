#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <iostream>
using namespace std;

class movie{

private:
    string movie_name;
    string movie_rating;
    int watched;
public:
     string get_name(){return movie_name;};

    movie(string name="none" , string rating="none",int watching=0);
    void display_name(movie mov);

};

#endif // MOVIE_H

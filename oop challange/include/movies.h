#ifndef MOVIES_H
#define MOVIES_H
#include <iostream>
#include <vector>
#include <string>
#include "movie.h"
using namespace std;
class movies
{
private:
    vector <movie> movies;
public:
    movies();
   ~ movies();
    bool add_movie(string name,string rating, int watching);
    bool increment_watched(string name);
    void display()const;

};

#endif // MOVIES_H

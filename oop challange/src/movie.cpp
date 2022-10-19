#include "movie.h"
#include <string>
#include <iostream>

movie::movie(string name,string rating, int watching)
:movie_name{name},movie_rating{rating},watched{watching}{
    cout<<"new movie added"<<endl;

}

void movie :: display_name(movie mov)const{
    cout<<"movie name  "<<mov.get_name();}

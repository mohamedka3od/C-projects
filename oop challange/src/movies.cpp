#include "movies.h"
#include <iostream>
movies::movies(){

}
 movies::~ movies(){
 }
bool movies:: add_movie(string name,string rating, int watching){
for(const movie &movie: movies){
    if(movie.get_name()== name)
        return false;
}
movie temp(name,rating,watched);
movies.push_back(temp);
return true;
}
bool movies:: increment_watched(string name){
    for(movie &movie:movies){
        if(movie.get_name()==name){
            movie.increment_watched();
            return true;
        }
    }
    return false;

}
void movies::display()const{
    if (movies.size()==0)
        cout<< "sorry no movies to display\n"<<endl;
    else{
        for(const auto &movie:movies)
            movie.display;
    }

}

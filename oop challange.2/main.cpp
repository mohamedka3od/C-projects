#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movie{
private:
    string name;
    string rating;
    int watched;
public:
   Movie(string name="none",string rating="none", int watched=0);
   ~Movie();
   Movie(const Movie &source);
    string get_name();
   void display_name()const;



};
Movie::Movie(string name,string rating, int watched)
:name{name},rating{rating},watched{watched}{
    cout<<"movie : "<<name<<" added"<<endl;


}
Movie::Movie(const Movie &source)
{

    name=source.name;
    rating=source.rating;
    watched=source.watched;
    cout<<"done"<<endl;
}
string Movie ::get_name(){return name;}

void Movie ::display_name()const{
    cout<<name<<endl;

}
Movie::~Movie(){
}

class Movies{
private:
    vector <Movie> movies;

};


int main()
{
Movie temp("saw","r",6);
cout<<temp.get_name();
temp.display_name();
}

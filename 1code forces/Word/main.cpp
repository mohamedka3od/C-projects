#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    int a=0,c=0;
    cin>>x;
    for (int i=0;i<x.length();i++){
        if (x[i]>='a'&&x[i]<='z')
            a++;
        else if(x[i]>='A'&&x[i]<='Z')
            c++;
    }
    if (a>=c){
        for (int y=0;y<x.length();y++){
           x[y]= tolower(x[y]);
        }

        }
    else{
        for (int z=0;z<x.length();z++){
            x[z]= toupper(x[z]);
        }

    }

        cout<<x;


    return 0;
}

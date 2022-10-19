#include <iostream>
#include <string>
using namespace std;

int main()
{

    string x,y;
    cin>>x>>y;
    for (int i=0;i<x.length();i++){
        if(x[i]<'a'||x[i]>'z')
            x[i]+=32;
    }
    for (int i=0;i<y.length();i++){
        if(y[i]<'a'||y[i]>'z')
            y[i]+=32;
    }


    if(x<y){
        cout<<"-1";
    }
    else if (x>y)
        cout<<"1";
    else if (x==y)
        cout<<"0";

}

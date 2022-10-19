#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin>>x;
    for (int i=0;i<x.length();i++){
        if(x[i]<'a'||x[i]>'z')
            x[i]+=32;
    }
    cout<<x;
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a,b,c,d;
    cin>>a>>b>>c;
    d=a+b;
    sort(c.begin(),c.end());
    sort(d.begin(), d.end());
    c==d?cout<<"YES":cout<<"NO";


    return 0;
}

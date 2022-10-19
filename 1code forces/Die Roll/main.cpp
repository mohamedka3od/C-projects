#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int y,w,d;
    cin>>y>>w;
    /*if(y>=w){
        d=6-y+1;
    }
    else{
        d=6-w+1;
    }*/
   d= 6-max(y,w)+1;
    int a=__gcd(d,6);
   cout<<d/a<<"/"<<6/a;
  /* switch(d){
case 1:
    cout<<"1/6";
    break;
case 2:
    cout<<"1/3";
    break;
case 3:
    cout<<"1/2";
    break;
case 4:
    cout<<"2/3";
    break;
case 5:
    cout<<"5/6";
    break;
case 6:
    cout<<"1/1";
    break;

    }*/


    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int z,c;
    float x,k,r,y,n=1;
    cin>>k>>r;
while(true){

        y=(k*n);
        x=y-r;
        z=x;
        c=y;

        if((z%10==0&&z==x)||(c%10==0&&c==y))
            break;
        else
            n++;
}


    cout<<n;



}


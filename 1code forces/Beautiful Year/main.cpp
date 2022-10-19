#include <iostream>

using namespace std;

int main()
{
    int y,n1,n2,n3,n4;
    cin>>y;
    while(true){
    y++;
    n1=y/1000;
    n2=(y/100)-(10*n1);
    n3=(y/10)-(100*n1+10*n2);
    n4=y-(1000*n1+100*n2+10*n3);
if(n1!=n2&&n1!=n3&&n1!=n4)
        if(n2!=n3&&n2!=n4)
        if(n3!=n4){
    cout<<y;
    break;
}

    }
    return 0;
}

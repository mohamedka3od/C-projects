#include <iostream>

using namespace std;

int main()
{
int n ,x,f=1;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    if(x==1)f=0;
}
f==0?cout<<"HARD":cout<<"EASY";

    return 0;
}

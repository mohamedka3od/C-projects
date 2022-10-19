#include <iostream>

using namespace std;

int main()
{
int n,b,a,cap=0,t=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b;
    t=t-a+b;
    if(t>cap)
        cap=t;
}
cout<<cap;

    return 0;
}

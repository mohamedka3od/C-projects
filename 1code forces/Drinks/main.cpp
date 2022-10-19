#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
cout<<fixed<<setprecision(12);
double p,x=0;
int n;
cin>>n;
for(int i=0 ;i<n ;i++){
    cin>>p;
    x+=p/static_cast<double>(n);
}
cout<<x;


    return 0;
}

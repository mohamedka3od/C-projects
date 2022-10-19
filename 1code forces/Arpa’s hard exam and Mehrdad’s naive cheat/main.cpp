#include <iostream>

using namespace std;

int main()
{
  long double n,f,ans;
   int a;

   cin>>n;
   if(n==0){
    cout<<1;
   }
   else{
   f=n/4;
   a=n/4;
   ans=f-a;
   ans=ans*4;
   a=ans;

switch (a){
case 1:
    cout<<8;
    break;
case 2:
    cout<<4;
    break;
case 3:
    cout<<2;
    break;
case 0:
    cout<<6;
    break;
}}
    return 0;
}

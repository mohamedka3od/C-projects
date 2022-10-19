#include <iostream>

using namespace std;

int main()
{
  int n,t,k,d,c=0,x=0;
  cin>>n>>t>>k>>d;
 while(n>0)
 {
  n=  n-k;
  x+=t;

   if (x>d){
    c++;
    if(c>1){
        cout<<"YES";
        break;
    }
   }
 }
 if (c<=1)
    cout<<"NO";
}

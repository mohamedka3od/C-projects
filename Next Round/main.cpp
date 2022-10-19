#include <iostream>

using namespace std;

int main()
{
   int n,k,a,b=0,c=0;
   cin>>n>>k;
   for (int i=0; i<n;i++){
    cin>>a;
    if(a>0&&((c<=k-1)||(a==b))){
        ++c;
    }
    else{
        break;
    }
    b=a;
   }
   cout<<c;
}

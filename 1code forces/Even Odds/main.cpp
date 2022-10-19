#include <iostream>

using namespace std;

int main()
{
   long long n,k,h,ans;
   cin>>n>>k;

   if(n%2==0){h=n/2;}
   else{h=(n+1)/2;}

if(h>=k){ans=k+k-1;}
else{
        if(n%2==0)
        ans=k-(n-k);
        else
            ans=k-(n-k+1);
}
cout<<ans;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   string x="abcdefghijklmnopqrstuvwxyz";
   for(int i=0;i<k;i++){
        cout<<x[i];


   }
   for(int i=0;i<(n-k);i++){
   if (i>k-1){
    n=n-k;
    i=0;
    cout<<x[i];
   }
   else
    cout<<x[i];

   }
    return 0;
}

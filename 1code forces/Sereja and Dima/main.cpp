#include <iostream>

using namespace std;

int main()
{
    int n,y,s=0,d=0,c=0;
    cin>>n;
    int x[n];
    for (int i=0;i<n;i++){
        cin>>x[i];
        }
   y=n-1;
   int i=0;
   while (c<n){
     if(x[i]>x[y]){
       if(c%2==0){
        s+=x[i];
    }
   else{
        d+=x[i];
   }
   i++;
     }
     else{
        if(c%2==0){
        s+=x[y];
    }
        else{
        d+=x[y];
   }
       y--;
     }

    c++;
   }
   cout<<s<<" "<<d;
    return 0;
}

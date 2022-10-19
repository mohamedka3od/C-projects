
#include <bits/stdc++.h>

using namespace std;

int main()
{

int n,c=0;
cin>>n;
int x[n];
for(int i=0; i<n;i++){
    cin>>x[i];
}
sort(x,&x[n]);
for(int i=0; i<n;i++){
   if ((x[i]>x[0])&&(x[i]<x[n-1])) {
        c++;

   }
}
cout<<c;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
  int n,m;
  cin>>n;
  int x[n];
  for (int i=0;i<n;i++){
    cin>>x[i];
  }
  for(int j=n-1;j>=0;j--){
    for(int k=j-1;k>=0;k--){
        if (x[j]<x[k]){
              m=x[j];
            x[j]=x[k];
            x[k]=m;
        }
    }
  }
   for (int i=0;i<n;i++){
    cout<<x[i]<<" ";
   }
    return 0;
}

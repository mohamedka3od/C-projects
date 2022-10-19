#include <iostream>

using namespace std;

int main()
{

    int n,x,c=0,b=0;
    cin>>n;
    for (int i=0;i<n;i++){
      cin>>x;
      if(x==-1){
        c++;
        if(b>=1){
            c--;
            b--;
        }
      }
      if(x>=1)
        b+=x;

    }
    cout<<c;
    return 0;
}

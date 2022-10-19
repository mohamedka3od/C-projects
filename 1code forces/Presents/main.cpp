#include <iostream>

using namespace std;

int main()
{
    int n,y;
    cin>>n;
    int x[n];
    for(int i=0 ; i<n;i++){
        cin>>y;
        x[y-1]=i+1;
    }

    for(int i=0 ; i<n;i++){
    cout<<x[i]<<" ";
    }
    return 0;
}

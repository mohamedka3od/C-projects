#include <iostream>

using namespace std;

int main()
{
    int n,m,x,y;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        cin>>y;
        if(x>0)
        a[x-2]=a[x-2]+y-1;
        if(x<n)
        a[x]+=a[x-1]-y;
        a[x-1]=0;
    }
     for (int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

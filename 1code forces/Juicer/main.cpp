#include <iostream>

using namespace std;

int main()
{
    int n,b,d,c=0,ans=0;
    cin>>n>>b>>d;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=b){
           c+=a[i];

        }

        if (c>d){
            c=0;
            ans+=1;
        }

    }
    cout<<ans;

}

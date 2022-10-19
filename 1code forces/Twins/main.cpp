#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0,m=0,c=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];

    }
    sort(x,x+n,greater<int>());

 for(int i=0;i<n;i++){
        ans+=x[i];
        c+=1;
        for(int j=i+1;j<n;j++){
            m+=x[j];
        if(ans>m){
                if(j==n-1){
                        i=n;

                }
            continue;
        }

           else {
               break;
           }
        }
        m=0;
    }
    cout<<c;
    return 0;
}

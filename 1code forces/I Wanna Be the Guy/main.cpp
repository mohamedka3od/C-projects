#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n , p , q , m ,a;
    cin>>n>>p;
    int x[p];
    for (int i=0 ; i<p ; i++){
        cin>>x[i];
    }
    cin>>q;
    int y[q];
    for (int i=0 ; i<q ; i++){
        cin>>y[i];
    }
    m=max(p,q);
    for(int i=1;i<=n;i++){
            a=0;
        for(int j=0;j<m;j++){
            if(x[j]==i||y[j]==i){
                a=1;
                break;
            }
        }
    if(a==0){
        cout<<"Oh, my keyboard!";
        break;
    }
    }
    if(a==1){
        cout<<"I become the guy.";
    }

       return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    int n,y=0;
    cin>>n>>x;
    for(int i=0;i<n;i++){
      x[i]= tolower(x[i]);}


    string z="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<z.size();i++){
            for(int j=0;j<n;j++){
                if(z[i]==x[j]){
                        y=1;
                    break;

                }
                else
                    y=0;

            }
        if(y==0){
            cout<<"NO";
            break;
        }
    }
    if(y==1)
    cout<<"YES";
    return 0;
}

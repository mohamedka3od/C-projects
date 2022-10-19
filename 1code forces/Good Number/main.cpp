#include <bits/stdc++.h>
using namespace std;

int main()
{
   int k , n ,ans=0;
    string a,b="0123456789",c;
    cin>>n>>k;
    for(int i = 0;i<=k;i++){
        c.push_back(b[i]);
        }
    for(int i =0;i<n;i++){
            cin>>a;
            sort(a.begin(),a.end());
      if(a==c) ans++;
      else{
            int cunt =0;
      for(int j=0; j<=k;j++){
            size_t f =a.find(c[j]);
      if(f != string::npos){cunt++;}
      }
      if (cunt==k+1) ans++;
      }

    }
    cout<<ans;


    return 0;
}

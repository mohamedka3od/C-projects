#include <bits/stdc++.h>
using namespace std;
int main(){
int n,c1=0,c2=0;
cin>>n;
string x[n],y;
for(int i=0;i<n;i++){
    cin>>x[i];
    if(x[i]==x[0]){
        c1++;
    }
    else{
        c2++;
        y=x[i];
    }
}
if(c1>c2)cout<<x[0];
else cout<<y;


return 0;
}

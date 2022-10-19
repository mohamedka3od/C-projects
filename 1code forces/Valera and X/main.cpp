#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n,a=1;
   cin>>n;
   string x[n];
   char s,m;
   for(int i=0;i<n;i++){
    cin>>x[i];
    if(i==0){
    s=x[0][0];
    m=x[0][1];}

    if(x[i][i]==s&&x[i][n-(i+1)]==s&&s!=m){
        for(int j=0;j<n;j++){
            if(j==i||j==(n-(i+1)))
                continue;
            else if(x[i][j]==m)
                continue;
            else{a=0;}
            }
    }
    else
        a=0;
    }
    if(a==1){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
char x;
string y;
cin>>x>>y;
string k="qwertyuiopasdfghjkl;zxcvbnm,./";
if(x=='R'){
    for(int i=0;i<y.size();i++){
        for (int j=0;j<k.size();j++){
            if(y[i]==k[j]){
                y[i]=k[j-1];
                break;
            }
        }
    }
    cout<<y;

}
if(x=='L'){
    for(int i=0;i<y.size();i++){
        for (int j=0;j<k.size();j++){
            if(y[i]==k[j]){
                y[i]=k[j+1];
                break;
            }
        }
    }
    cout<<y;

}



    return 0;
}

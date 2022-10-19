#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]!=b[i]){
                //rated
            ans=1;
        }
        else if(i>0&&ans==0){
        if(a[i-1]<a[i]){
            //unrated
            ans=2;
        }}
    }
    if (ans ==1){
        cout<<"rated";
    }
    else if(ans ==2){
        cout<<"unrated";
    }
    else{
        cout<<"maybe";
    }

    return 0;
}

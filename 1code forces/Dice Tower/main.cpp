#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    bool ans1=0,ans2=0,t=0;
    cin>>n>>x;
    int a[n] , b[n],c,d,y=7-x;
    for(int i =0 ;i<n;i++){
            if(t!=1)
        cin>>a[i]>>b[i];
        c=7-a[i];
        d=7-b[i];
    int ar[]={a[i],b[i],c,d};
            int x1[2];
        for(int j =0;j<4;j++){
                int test=0;

                for(int k =1;k<=6;k++){
                    if(ar[j]!=k){
                        test++;
                        x1[test-1]=k;
                        break;
                    }
                    if(test==2)break;
                }

    }

     if(y!= x1[0]&&y!= x1[1]){
            if(ans1&&ans2&&t==0){
                i--;
                 x=x1[1];
                 y=7-x;
                 ans1=1;
                 ans2=1;
                 t=1;
                 continue;
            }
            else if(ans1&&ans2&&t==1) break;

                            x=x1[0];
                            y=7-x;
                            ans1=1;
                            ans2 = 1;

                        }
                        else if(y== x1[1]&&y!= x1[0]){
                             x=x1[0];
                            y=7-x;
                            ans1=1;
                            ans2=0;
                            t=0;
                        }
                        else if(y== x1[0]&&y!= x1[1]){
                             x=x1[1];
                            y=7-x;
                            ans2=1;
                            ans1=0;
                            t=0;
                        }

}
if(!ans1 ||!ans2) cout<<"YES";

else cout<<"NO";
}

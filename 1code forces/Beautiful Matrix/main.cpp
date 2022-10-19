#include <iostream>

using namespace std;

int main()
{
    int m[5][5];
    int r=0,c=0,ans=0;
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>m[i][j];
            if(m[i][j]==1){
                r=i+1;
                c=j+1;
            }

        }
    }
    while(r<3){
        r++;
        ans++;

    }

    while(r>3){
        r--;
        ans++;
    }

    while(c<3){
        c++;
        ans++;
    }

    while(c>3){
        c--;
        ans++;
    }

    cout<<ans;


    return 0;
}

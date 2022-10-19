#include <iostream>

using namespace std;

int main()
{
    int n,c=0,cc=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        for(int y=0;y<3;y++){
            cin>>a[i][y];
            if(a[i][y]==1)
                c++;
        }
        if (c>=2)
            cc++;
        c=0;

    }
    cout<<cc;
    return 0;
}

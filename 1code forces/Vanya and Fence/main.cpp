#include <iostream>

using namespace std;

int main()
{
    int n,h,y=0;
    cin>>n>>h;
    int a[n+1];
    for (int i=0;i<n;i++){
        cin>>a[i];
        y++;
        if (a[i]>h)
            y++;
    }
    cout<<y;
    return 0;
}

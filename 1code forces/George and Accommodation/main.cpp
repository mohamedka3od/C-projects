#include <iostream>

using namespace std;

int main()
{
    int n,p,q,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        if(p<q&&q-p>=2)c++;
    }
    cout<<c;
    return 0;
}

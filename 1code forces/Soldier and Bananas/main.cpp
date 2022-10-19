#include <iostream>
using namespace std;

int main()
{
    int k,n,w,p=0;
    cin>>k>>n>>w;
    for(int i=0; i<w;i++){
            p+=k*(i+1);

    }
    if(n>=p)
        cout<<0;
    else
        cout<<p-n;

    return 0;
}

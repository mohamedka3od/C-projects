#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        if (x[i]!=x[i-1]){
            c++;
        }

    }
    cout<<c;
    return 0;
}

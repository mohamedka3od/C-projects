#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string x[n];
    for(int i=0; i<n; i++){
        cin>>x[i];

    }
    for(int i=0; i<n; i++){
            if((x[i]).size()>10)
        cout<<x[i][0]<<(x[i]).size()-2<<x[i][((x[i]).size()-1)]<<endl;
    else
        cout<<x[i]<<endl;

    }
    return 0;
}

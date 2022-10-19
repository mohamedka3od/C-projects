#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int h[n],a[n],c=0;
    for(int k=0;k<n;k++){
        cin>>h[k]>>a[k];
    }
    for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(h[i]==a[j])
                    c++;
            }
}
cout<<c;
}

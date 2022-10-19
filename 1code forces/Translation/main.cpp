#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,t;
    int f=1;
    cin>>s>>t;
    for(int i=0; i<s.length();i++){
            if(s[i]==t[s.length()-(i+1)])
            continue;
    cout<<"NO";
    f=0;
    break;

    }
    if(f==1)
        cout<<"YES";
    return 0;
}

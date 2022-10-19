#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n[4],c=0;
    string s;
    for(int i=0;i<4;i++){

    cin>>n[i];
    }
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')
            c+=n[0];
        else if (s[i]=='2')
            c+=n[1];
        else if (s[i]=='3')
            c+=n[2];
        else if (s[i]=='4')
            c+=n[3];
    }
    cout<<c;

    return 0;
}

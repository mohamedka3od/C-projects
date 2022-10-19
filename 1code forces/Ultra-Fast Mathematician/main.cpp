#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
    s1[i]==s2[i]? cout<<0 :cout<<1;
    }
    return 0;
}

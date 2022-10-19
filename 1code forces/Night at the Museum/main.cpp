#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int r,l,m=0;
    cin>>s;
    s='a'+s;
   for(int i=1;i<s.length();i++){
        if(s[i-1]<=s[i]){
            r=s[i]-s[i-1];
            l=26-(r);
            if(r<=l)
                m+=r;
            else
            m+=l;
        }
        else{
            r=s[i-1]-s[i];
            l=26-(r);
            if(r<=l)
                m+=r;
            else
            m+=l;

        }
    }
    cout<<m;
}

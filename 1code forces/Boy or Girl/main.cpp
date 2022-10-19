#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    int ans=0,c=0;
    cin>>x;
    for (int i=0;i<x.length();i++){
            for(int j=i+1;j<x.length();j++){
                if(x[i]==x[j])
                    c++;

            }
            if(c==0)
            ans++;
            c=0;
    }

    if (ans%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}

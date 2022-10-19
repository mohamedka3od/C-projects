#include <iostream>
#include <string>
using namespace std;

int main()
{
 string s;
 cin>>s;
 char c;
 for(int i=0;i<s.size();i+=2){
    for(int j=i+2;j<s.size();j+=2){

         if(s[i]>s[j]){

               c= s[j];
                s[j]=s[i];
                s[i]=c;

        }
    }
 }
 cout<<s;
}

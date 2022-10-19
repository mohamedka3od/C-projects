#include <iostream>
#include <string>

using namespace std;

int main()
{
   int n,c=0;
   string s;
   cin>>n>>s;
   for (int i=1;i<n;i++){
    if (s[i-1]==s[i]){
        c++;
    }
   }
   cout<<c;
    return 0;
}

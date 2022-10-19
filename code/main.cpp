#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    for(int i=x.length()+1;i>=0;i--){
        cout<<x[i+4]<<x[i+1]<<x[i+5]<<x[i+4]<<x[i+5]<<x[i+39]<<endl;
    }
    return 0;
}

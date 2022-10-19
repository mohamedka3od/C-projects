#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    vector<char> y;
    for (int i=1; i<x.size(); i+=3)
    {
        for (int j=0; j<=y.size(); j++ )
        {
            if(j<y.size())
            {
                if(x[i]==y[j])
                    break;
                else
                    continue;
            }
            if(j==y.size())
            {
                if(x[i]!='}'){
                y.push_back(x[i]);
                break;
                }
            }
        }
    }

    cout<<y.size();
    return 0;
}

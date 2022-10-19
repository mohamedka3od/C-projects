#include <iostream>

using namespace std;

int main()
{
    bool a=true;
    int n,m;
    cin>>n>>m;
    char x;
    for(int i=0;i<(n*m);i++){
        cin>>x;
        if(x== 'C'||x== 'M'||x== 'Y'){a=false;}
    }
    if(a)
        cout<< "#Black&White" ;
    else
          cout<<"#Color";
    return 0;
}

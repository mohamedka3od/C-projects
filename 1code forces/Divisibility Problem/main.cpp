#include <iostream>

using namespace std;

int main()
{
    long long a ,b,c=0,n;

    cin>>n;
    for(int i=0 ;i<n ; i++){
        cin>>a>>b;
        c=0;
        if(a<=b){
            cout<<b-a<<endl;
        }
        else if(a%b==0){
            cout<<0<<endl;
        }
        else{

            cout<<((int(a/b)+1)*b)-a<<endl;
        }
        }
    return 0;
}

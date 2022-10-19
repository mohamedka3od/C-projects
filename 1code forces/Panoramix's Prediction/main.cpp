#include <iostream>

using namespace std;
 bool is_brime(int m){
    for(int i =2;i<m;i++){
        if(m%i==0){return false;}
    }
    return true;
    }
    bool is_next_brime(int n, int m){
    for(int i = n+1; i< m; i++){
        for(int j =2; j<i;j++){
            if(i%j==0) break;
            else if(j==i-1) return false;
        }
    }
    return true;
    }
int main()
{


    int n,m;
    cin>>n>>m;
    if(is_brime(m)&&is_next_brime(n,m)) { cout<<"YES";}
    else cout<<"NO";
}

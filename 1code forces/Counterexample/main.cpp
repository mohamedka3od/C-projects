#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l,r;
    bool ans =0;
    cin>>l>>r;

    for(long long a=l ;a<=r-2;a++){
            for(long long b =a+1;b<r;b++){
                    for(long long c=a+2; c<=r;c++){

            if((__gcd(a,b))==1&&(__gcd(b,c))==1&&__gcd(a,c)!=1){
                cout<<a<<' '<<b<<' '<<c;
                ans = 1;
                break;
            }

            }
            if(ans)break;

        }
        if(ans)break;
    }

if(ans==0)
    cout<<-1;
}

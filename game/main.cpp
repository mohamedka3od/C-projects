#include <iostream>

using namespace std;

int main()
{
    int x=7;
    for (int i=0;i<=10000;i++){
    if ((x%7)==0&&((x-1)%2)==0&&((x-1)%3)==0&&((x-1)%4)==0&&((x-1)%5)==0&&((x-1)%6)==0)
    cout<<x<<endl;
    x++;
    }
    return 0;
}

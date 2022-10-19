#include <iostream>

using namespace std;

int main()
{
    int x = 1 , sum = 0;
    while(x <=256)
        {
        sum = sum+x;
        x*=2;
            }

         cout<<sum;




    return 0;
}

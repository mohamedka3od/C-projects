#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int min= INT_MAX, max=INT_MIN;
    int x=0 , y=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            x=i;
        }
        if(a[i]<=min){
            min=a[i];
            y=i;
        }
    }
   if(x>y){
    cout<<x+(n-1-y-1);
   }
   else
    cout<<x+n-1-y;
    return 0;
}

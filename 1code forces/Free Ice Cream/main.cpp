#include <iostream>

using namespace std;

int main()
{
  int n,x,d,dis=0;
  char s;
  cin>>n>>x;
  long long c=x;
  for (int i=0;i<n;i++){
        cin>>s>>d;
  if(s=='+'){
    c=c+d;
  }

  if (s=='-'){
    if (c>=d){
        c-=d;
    }
    else{
        dis++;
    }
  }
  }
  cout<<c<<" "<<dis;



    return 0;
}

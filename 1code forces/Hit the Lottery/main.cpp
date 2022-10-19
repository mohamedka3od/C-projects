#include <iostream>

using namespace std;

int main()
{
   int a,b=0,c,d,ans;
   cin>>a;
   if(a>=100){
     b=a/100;
   }
   ans=b;
   c=a-b*100;
   if(c>=20){
        ans+=c/20;

        c=c-((c/20)*20);
   }
   if(c>=10){
    ans+=c/10;
        c=c-((c/10)*10);
   }
    if(c>=5){
    ans+=1;
        c=c-5;
   }
   if(c>=1){
    ans+=c;
   }
   cout<<ans;


    return 0;
}

#include <iostream>

using namespace std;

int main()
{
int x,y,c=0;
cin>>x>>y;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        if(i%2!=0){
            if(c%2==0){
                if(j==y-1){cout<<"#";}
                else {cout<<".";
                }}

            else{
                if(j==0){cout<<"#";}
                else{cout<<".";}
            }}

         else{cout<<"#";}
    }
if(i%2!=0){c++;}
    cout<<endl;

}



    return 0;
}

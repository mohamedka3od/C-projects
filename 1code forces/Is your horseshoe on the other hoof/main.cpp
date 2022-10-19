#include <iostream>

using namespace std;

int main()
{
   /* int n[4],c=0,m=0;
    for(int i=0;i<4;i++){
        cin>>n[i];
    }
    for(int i=0;i<4;i++){
        for(int y=i+1;y<4;y++){
            if(n[i]==n[y]){
                    c++;
                   }
                }
        if(i>0){
          for(int z=i-1;z>=0;z--){
               if(n[i]==n[z])
                    m++;

        }
         if(m>1){
               c= c-m+1;



            }
            m=0;
        }
    }
    cout<<c;*/
    int n[4],c=0;
     for(int i=0;i<4;i++){
        cin>>n[i];}
       for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
        if(n[i]==n[j]){
            c++;
            n[i]=-1;}
       }

}
        cout<<c;



    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()

{
    string x;
    getline(cin,x);
  vector<char> y;



    for (int i=0; i<x.size();i++){
        for (int j=0;j<=y.size();j++ ){
                if(j<y.size()){
                    if(x[i]==y[j])
                        break;
                    else
                        continue;
                }
               if(j==y.size()){

                    y.push_back(x[i]);

                    break;
                }
        }


            }

            for (int i=0; i<y.size();i++){
                cout<<y[i];
            }
            cout<<y.size();
    return 0;
    /////////////////////////////////////////////////////****************************////////////////////////////////////////
   /* string x;
    getline(cin,x);
   char y[x.size()];

    y[0]=x[0];
   int m=1;
    for (int i=0; i<x.size();i++){
        for (int j=0;j<=m;j++ ){
                if(j<m){
                    if(x[i]==y[j])
                        break;
                    else
                        continue;
                }
               if(j==m){
                    y[j]=x[i];
                    m++;
                    break;
                }
        }


            }
            for(int i=0;i<m;i++){
                cout<<y[i];
            }

    return 0;*/
}

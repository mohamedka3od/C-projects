#include <iostream>

using namespace std;

int main()
{
    string x;
    int y;
    cout<< "enter number of charters"<<endl;
    cin>>y;
    int m[y];

    cout<<"enter charters" <<endl;
    cin>>x;
    for (int i=0; i<=y-1;i++){
       for (int z=0;z<=y-1;z++){
        if (x[i]==x[z]&&x[z]!=m[z]){
            cout<<x[i];
            m[z]=x[z];
                        }
                    }
            cout<<" ";

                }
}

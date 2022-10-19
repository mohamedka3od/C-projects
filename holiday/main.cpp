/*
#include <iostream>

using namespace std;

int main()
{
    string chr;
    int chr_num;
    cout<< "enter number of charters"<<endl;
    cin>>chr_num;
    int m[chr_num];

    cout<<"enter charters" <<endl;
    cin>>chr;
    for (int i=0; i<=chr_num-1;i++){
       for (int z=0;z<=chr_num-1;z++){
        if (chr[i]==chr[z]&&chr[z]!=m[z]){
            cout<<chr[i];
            m[z]=chr[z];
                        }
                    }
            cout<<" ";

                }

cout<<"___________________________________________________________________________________"<<endl;
}*/
                                            // after upgrade
                                           // _________________






#include <iostream>

using namespace std;

int main()
{
    string chr;

    int m[chr.length()];

    cout<<"enter charters" <<endl;
    cin>>chr;
    for (int i=0; i<=chr.length()-1;i++){
       for (int z=0;z<=chr.length()-1;z++){
        if (chr[i]==chr[z]&&chr[z]!=m[z]){
            cout<<chr[i];
            m[z]=chr[z];
                        }
                    }
            cout<<" ";

                }
}

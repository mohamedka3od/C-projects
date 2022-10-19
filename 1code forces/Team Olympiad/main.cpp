#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int t[n];
    vector<int>x1,x2,x3;
   // vector<int>x2;
    //vector<int>x3;
    for(int i=0;i<n;i++){
        cin>>t[i];
        if(t[i]==1){
            x1.push_back(i+1);
        }
         if(t[i]==2){
            x2.push_back(i+1);
        }
         if(t[i]==3){
            x3.push_back(i+1);
        }
    }
    int w =min(x1.size(),min(x2.size(),x3.size()));
    cout<<w<<endl;
    for (int i=0; i<w;i++){
        cout<<x1[i]<<" "<<x2[i]<<" "<<x3[i]<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
//���� 10 ����� ������� ���� ���
{
    int sum=0,i,n;
    i=1;

    while(i<=10)
    {
        i+=1;
        cout<<"enter number"<<endl;
        cin>>n;
        if(n%2==0)
        {
            sum=sum+n;
        }
    }
            cout<<"sum ="<<sum;

    return 0;
}

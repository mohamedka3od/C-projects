#include <iostream>
using namespace std;
void sum (int *a, int *b, int *t)//hys2pl 3nwan a,b,t w y5znhm
{
    *t = *a + *b;//2lkema 2lmowgoda fl 3nwan 2le bt4awer 3leha t = kemt 3nan a+ kemt 3nwan b
}

int main()
{
    int num1, num2, total;
    cout<<"\n Enter the first number : ";
    cin>>num1;
    cout<<"\n Enter the second number : ";
    cin>>num2;
    sum(&num1, &num2, &total);//2b3t 2l3nwan ll pointer
    cout<<"\n Total = "<< total<<endl;
    return 0;
}

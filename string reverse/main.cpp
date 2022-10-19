#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100], reverse_str[100], temp;
    int i=0 , j;
    cout<<"\n Enter the string : ";
    cin.get(str , 100);
    j = strlen(str)-1;
    while(i < j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    cout<<"\n The reversed string is : "<<str<<endl;
    return 0;
}

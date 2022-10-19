#include <iostream>

using namespace std;
void read_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"enter element # "<<i+1<<": ";
        cin>>arr[i];
    }
}
int find_small(int arr[], int n)
{
    int i , small = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i] < small)
            small = arr[i];
    }
    return small;
}

int main()
{
    int num[10], n, smallest;
    cout<<"\n Enter the size of the array : ";
    cin>>n;
    read_array(num, n);
    smallest = find_small(num, n);
    cout<<"\n The smallest number in the array is ="<< smallest<<endl;
    return 0;
}

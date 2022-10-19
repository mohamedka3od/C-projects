#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bucket sort function
void bucketSort(float arr[], int n)
{
    // 1) Create n empty buckets
    vector <float> b[n];

    // 2) Put array elements in different buckets
    for (int i = 0; i < n; i++)
    {
        int b_num = n * arr[i]; // Index in bucket
        b[b_num].push_back(arr[i]);
    }

    // 3) Sort every individual buckets
    for (int i = 0; i < n; i++)
        sort(b[i].begin(), b[i].end());

    // 4) Concatenate all buckets into arr[]
    int c = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[c++] = b[i][j];
}
//function to display array
void display(float arr[],int n){


    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
cout <<endl;
}

// program to test above function
int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    float arr[n];
    cout<<"\n enter the elements :- "<<endl;
    for(int i=0 ;i<n;i++){
        cout<< i+1 <<" : ";
        cin>>arr[i]; }
    cout<< " array before sorting : ";
    display(arr,n);
    bucketSort(arr, n);//calling the function
    cout<< " array after sorting  : ";
    display(arr,n);

    return 0;
}

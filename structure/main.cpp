#include <iostream>
#include <string.h>
using namespace std;
struct student
{
    int roll_no;
    char name[80];
    int fees;
    char DOB[80];
};
int main()
{

    student stud[50];
    int n, i, num, new_rolno;
    int new_fees;
    char new_DOB[80], new_name[80];
    cout<<"\n Enter the number of students : ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\n Enter the roll number : ";
        cin>>stud[i].roll_no;
        cout<<"\n Enter the name : ";
        cin>>stud[i].name;
        cout<<"\n Enter the fees : ";
        cin>>stud[i].fees;
        cout<<"\n Enter the DOB : ";
        cin>>stud[i].DOB;
    }
    for(i=0; i<n; i++)
    {
        cout<<"\n ********DETAILS OF STUDENT %d*******"<< i+1;
        cout<<"\n ROLL No."<< stud[i].roll_no;
        cout<<"\n NAME = "<< stud[i].name;
        cout<<"\n FEES = "<< stud[i].fees;
        cout<<"\n DOB = "<< stud[i].DOB;
    }
    cout<<"\n Enter the student number whose record has to be edited : ";
    cin>>num;
    num= num-1;
    cout<<"\n Enter the new roll number : ";
    cin>>new_rolno;
    cout<<"\n Enter the new name : ";
    cin>>new_name;
    cout<<"\n Enter the new fees : ";
    cin>>new_fees;
    cout<<"\n Enter the new DOB : ";
    cin>>new_DOB;
    stud[num].roll_no = new_rolno;
    strcpy(stud[num].name, new_name);
    stud[num].fees = new_fees;
    strcpy (stud[num].DOB, new_DOB);
    for(i=0; i<n; i++)
    {
        cout<<"\n ********DETAILS OF STUDENT %d*******"<< i+1;
        cout<<"\n ROLL No. = "<< stud[i].roll_no;
        cout<<"\n NAME = "<< stud[i].name;
        cout<<"\n FEES = "<< stud[i].fees;
        cout<<"\n DOB = "<< stud[i].DOB;
    }

    return 0;
}

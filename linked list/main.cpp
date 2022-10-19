#include <iostream>

using namespace std;
struct node{
int data;
node*next;
};
void first_node(node*head,int a)
{
    head->data=a;
    head->next=NULL;

}
void insert_node (int n, node*&head ){
node*p=new node;
p->data=n;
p->next=NULL;
node*curr=head;
while (curr!=NULL){
    if(curr->next==NULL){
        curr->next=p;
        return;
    }
    curr=curr->next;
}
}
void display(node *head){
    node*curr=head;
    while(curr){
        cout<<curr->data<<"||"<<curr->next<<endl;
        curr=curr->next;
    }

}
int main()
{
    node*head=new node;
    int a,n,d,x;
    cout << "enter 1st node" << endl;
    cin>>a;
    first_node(head,a);
    cout<<"number of elements \n";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"data of"<<i+1<<endl;
        cin>> x;
        insert_node(x,head);
    }
    display(head);
    return 0;
}

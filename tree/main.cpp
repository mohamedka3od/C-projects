#include <iostream>

using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    };
    node*tree;
    node*creat_tree(node*tree){
    tree=null;
    }
    node*insrt(node*tree,int val){
    node*ptr,*nodeptr,*parentptr;
    ptr=new node;
    ptr->data=val;
    ptr->left=null;
    ptr->right=null;
    if(tree==null){
        tree=ptr;
        tree->left=null;
        tree->right=null;
    }
    else{
        nodeptr=tree;
        parentptr=null;
        while(nodeptr!=null){
            parentptr=nodeptr;
            if(val>nodeptr->data)
                nodeptr=nodeptr->right;
            else
                nodeptr=nodeptr->left;
        }
        if(val>parentptr->data)
        {
             parentptr->right=ptr;
        }
        else
           partentptr->left=ptr;

    }
    }

    void preorder(node*tree){
    if (tree!=null){
        cout<<tree->data;
        preorder(tree->left);
        preorder(tree->right);
    }
        }
node*smallest(node*tree){
if((tree==null)||(tree->left==null))
    return tree;
else
    return smallest(tree->left);
}
int main()
{

    return 0;
}

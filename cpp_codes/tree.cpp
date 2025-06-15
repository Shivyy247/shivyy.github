#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node * create_node(int data)
{
    struct node*root=(struct node*)malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return(root);
}
struct node * insert(struct node*root,int data)
{
    if(root==NULL)
    {
        return(create_node(data));
    }
    else
    {
        if(data<root->data)
        {
            root->left=insert(root->left,data);
        }
        else
        {
            root->right=insert(root->right,data);
        }
    }
    return(root);
}
void inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<"  ";
        inorder(root->right);
    }
}
void preorder(struct node*root)
{
    if(root!=NULL)
    {
        cout<<root->data<<"  ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node*root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<"  ";
    }
}
int main()
{
    struct node*root;
    root=NULL;
    root=insert(root,90);
    insert(root,87);
    insert(root,60);
    insert(root,156);
    insert(root,45);
    insert(root,62);
    insert(root,120);
    insert(root,14);
    insert(root,3);
    cout<<"Inorder: ";
    inorder(root);
    cout<<"\n";
    cout<<"Preorder: ";
    preorder(root);
    cout<<"\n";
    cout<<"Postorder: ";
    postorder(root);
    cout<<"\n";
    return 0;
}
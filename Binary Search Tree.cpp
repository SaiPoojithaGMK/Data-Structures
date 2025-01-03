#include <iostream>
using namespace std;

class node
{   
   public:
    int data;
    node *left,*right;
    node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

node *insertBST(node *root,int key)
{
    node *temp=new node(key);
    if(root==NULL)
    {
        return temp;
    }
    if(key<root->data)
    {
        root->left=insertBST(root->left,key);
    }
    else
    {
        root->right=insertBST(root->right,key);
    }
    return root;
}

node *searchBST(node *root,int key)
{
    if(root==NULL)
    {
        cout<<"element not found";
        return root;
    }
    else
    {
        if(key<root->data)
        {
            return searchBST(root->left,key);
        }
        else if(key>root->data)
        {
            return searchBST(root->right,key);
        }
        else
        {
            cout<<"element found";
            return root;
        }
    }
}

node *minBST(node *root)
{
    node *temp=root;
    while(temp!=NULL && temp->left!=NULL)
    {
          temp=temp->left;
    }
    return temp;
}


node *maxBST(node *root)
{
    node *temp=root;
    while(temp!=NULL && temp->right!=NULL)
    {
          temp=temp->right;
    }
    return temp;
}

void preOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

void inOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

node *deleteBST(node *root,int key)
{
    if(root==NULL)
    {
        return root;
    }
    else
    {
        if(key<root->data)
        {
            root->left=deleteBST(root->left,key);
        }
        else if(key>root->data)
        {
            root->right=deleteBST(root->right,key);
        }
        else
        {
            if(root->left=NULL)
            {
               node *temp=root->right;
               delete root;
               return temp;
            }
            else if(root->right=NULL)
            {
                node *temp=root->left;
                delete root;
                return temp;
            }
            else
            {
               node *temp=minBST(root->right);
                root->data=temp->data;
                deleteBST(root->right,temp->data);
            }
        }
       
    }
    return root;
}

int main()
{
    int choice=0;
    node *root=NULL;
    int x;
    do
    {
    	cout<<"enter your choice";
        cin>>choice;
        switch(choice)
        {
            case 1://to insert node
            {
                cout<<"enter node to insert";
                cin>>x;
                root=insertBST(root,x);
                break;
            }
            case 2://to search node
            {
                cout<<"enter node to search";
                cin>>x;
                searchBST(root,x);
                break;
            }
            case 3://to find min
            {
                cout<<"MIN VALUE IS "<<minBST(root)->data;
                break;
            }
            case 4://to find max
            {
                cout<<"MAX VALUE IS"<<maxBST(root)->data;
                break;
            }
            case 5:
            {
                cout<<"enter key to delete";
                cin>>x;
                root=deleteBST(root,x);
                break;
            }
            case 6://INORDER TRAVERSAL
            {
                cout<<"InOrder-Traversal is: ";
                inOrder(root);
                cout<<endl;
                break;
            }
            case 7:
            {
                cout<<"Pre-Order Trvaersal is : ";
                preOrder(root);
                cout<<endl;
                break;
            }
            case 8:
            {
                cout<<"Post-Order Trversal is :";
                postOrder(root);
                cout<<endl;
                break;
            }
            default:
            break;
        }
    }while(choice!=0);
    return 0;
}

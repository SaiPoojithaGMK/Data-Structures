#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *back;
    public:
    Node(int data1,Node* back1,Node* next1)
    {
        data=data1;
        back=back1;
        next=next1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node *ConvertArr2Dll(vector<int>arr)
{
    int n=arr.size();
    Node *head=new Node(arr[0]);
    Node *prev=head;
    for(int i=1;i<n;i++)
    {
        Node *temp=new Node(arr[i],prev,nullptr);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    vector<int> a={12,7,8,5};
    Node *head=ConvertArr2Dll(a);
    print(head);
    return 0;
}
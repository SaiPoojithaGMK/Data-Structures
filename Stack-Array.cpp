
#include <iostream>
using namespace std;

class stack
{
    public:
    int n;
    int *arr;
    int top;
    stack(int val)
    {
        n=val;
        arr=new int[n];
        top=-1;
    }
    void push(int value)
    {
        if(top>=n-1)
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=value;
        }
    }
    
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
            cout<<"Popped :"<<arr[top]<<endl;
            top--;
        }
    }
    
    void display()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            cout<<"The elements are "<<endl;
            for (int i=top;i > -1;i-- )
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    
    void stackTop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            cout<<"Top= "<<arr[top]<<endl;
        }
    }
    
    void emptyStack()
    {
        if(top==-1)
        {
            cout <<" Stack is empty"<<endl;
        }
        else
        {
            cout<<" Stack is not empty"<<endl;
        }
    }
    
    void fullStack()
    {
        if(top>=n-1)
        {
            cout<<"stack is full"<<endl;
        }
        else
        {
            cout<<"stack is not full"<<endl;
        }
    }
    
    void stackCount()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            cout<<"Count= "<<top+1<<endl;
        }
    }
    
    void search(int target)
    {
        bool found=false;
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            for(int i=top;i>=0;i--)
            {
                if(arr[i]==target)
                {
                    found=true;
                    cout<<"Found"<<endl;
                }
            }
            if(found==false)
            {
                cout<<"the element is not found"<<endl;
            }
        }
    }
};

int main()
{
    int maxsize;
    cout<<"enter max size of the stack"<<endl;
    cin>>maxsize;
    stack s(maxsize);
    int x;
    cout<<"1.Push 2.Pop 3.Display 4.Top 5.Empty 6.Full 7.Count 8.Search 0.Exit  ";
    do{
        cin>>x;
        switch(x)
        {
            case 1:
            {
                int data;
                cout<<"enter element to push"<<endl;
                cin>>data;
                s.push(data);
                break;
            }
            case 2:
            {
                s.pop();
                break;
            }
            case 3:
            {
                s.display();
                break;
            }
            case 4:
            {
                s.stackTop();
                break;
            }
            case 5:
            {
                s.emptyStack();
                break;
            }
            case 6:
            {
                s.fullStack();
                break;
            }
            case 7:
            {
                s.stackCount();
                break;
            }
            
            case 8:
            {
                int data;
                cout<<"enter element to search:"<<endl;
                cin>>data;
                s.search(data);
                break;
            }
            case 0:
                cout<<"Exit"<<endl;
                break;
            
        }
    }while(x!=0);
    return 0;
}


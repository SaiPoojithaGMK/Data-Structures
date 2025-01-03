#include <iostream>
using namespace std;

class Queue 
{
    public:
    int front,rear;
    int *arr;
    int size;
    Queue(int val)
    {
        size=val;
        arr=new int[size];
        front=rear=-1;
    }
    
    void enqueue(int data)
    {
        if(rear>=size-1)
        {
            cout<<"queue full"<<endl;
        }
        else
        {
            if(rear==-1)//empty queue
            {
                front++;
            }
            
            
            rear++;
            arr[rear]=data;
            cout<< arr[rear]<<" is added "<<endl;
            
        }
    }
    
    void dequeue()
    {
        if(front==-1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear)
        {
            cout<<"Dequeued element= "<<arr[front]<<endl;
            front=rear=-1;
        }
        else
        {
            cout<<"dequeued element ="<<arr[front]<<endl;
            front++;
        }
    }
    
    void display()
    {
        if(rear==-1)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            cout<<"elements in the queue are:";
            for(int i=front;i<=rear;i++)
            {
                cout<< arr[i] <<" ";
            }
            cout<<endl;
        }
    }
    
    void queueFront()
    {
        if(rear==-1)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            cout<<"front= "<<arr[front]<<endl;
        }
    }
    
    void queueRear()
    {
        if(rear==-1)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            cout<<"rear = "<<arr[rear]<<endl;
        }
    }
    
    void empty()
    {
        if(rear==-1 || front==-1)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            cout<<"queue is not empty"<<endl;
        }
    }
    
    void full()
    {
        if(rear>=size-1)
        {
            cout<<"queue is full"<<endl;
        }
        else
        {
            cout<<"queue is not full"<<endl;
        }
    }
    
    void count()
    {
        if(rear==-1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<"Count = "<<rear-front+1;
        }
    }
};

int main()
{
    int size;
    int x;
    cout<<"enter max size of queue: "<<endl;
    cin>>size;
    Queue q(size);
    cout<<"1.Enqueue 2.Dequeue 3.Display 4.Queue Front 5.Queue Rear 6.Empty 7.Full 8.Count 0.Exit"<<endl;
    do{
        cin>>x;
        switch(x)
        {
            case 1:
            {
                int data;
                cout<<"enter data to add "<<endl;
                cin>>data;
                q.enqueue(data);
                break;
            }
            case 2:
            {
                q.dequeue();
                break;
            }
            case 3:
            {
                q.display();
                break;
            }
            case 4:
            {
                q.queueFront();
                break;
            }
            case 5:
            {
                q.queueRear();
                break;
            }
            case 6:
            {
                q.empty();
                break;
            }
            case 7:
            {
                q.full();
                break;
            }
            case 8:
            {
                q.count();
                break;
            }
            case 0:
            cout<<"exit"<<endl;
            break;
        }
    }while(x!=0);
    return 0;
}

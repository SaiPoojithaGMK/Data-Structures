#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    int arr[n];
    int didSwap=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==1)
        {
            break;
        }
        cout<<"runs"<<endl;//to know whether it is giving worst or good complexity..if it doesn't give run even 1 time then it is best complexity
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

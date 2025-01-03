#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
                //swap(arr[i],arr[min]);
            }
              swap(arr[i],arr[min]);//minimum will be swapped after rounding 1 time
        }
          
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

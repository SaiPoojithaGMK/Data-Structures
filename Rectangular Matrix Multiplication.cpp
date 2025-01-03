#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,a[100][100],b[100][100],c[100][100];
    cout<<"enter dimensions of matrix1:"<<endl;
    cin>>i>>j;
    cout<<"enter elements of matrix 1"<<endl;
    for (int m=0;m<i;m++)
    {
        for(int n=0;n<j;n++)
        {
            cin>>a[m][n];
        }
    }
    cout<<"enter dimensions of matrix2"<<endl;
    cin>>k>>l;
     cout<<"enter elements of matrix 2"<<endl;
    for (int m=0;m<k;m++)
    {
        for(int n=0;n<l;n++)
        {
            cin>>b[m][n];
        }
    }
    if(j==k)
    {
        for(int m=0;m<i;m++)
        {
            for(int n=0;n<k;n++)
            {
                for(int p=0;p<j;p++)
                {
                    c[m][n]+=a[m][p]*b[p][n];
                    
                }
            }
        }
        for(int m=0;m<i;m++)
        {
            for(int n=0;n<l;n++)
            {
                cout<<c[m][n]<<" ";
            }
            cout<<"\n";
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter the size of the square matrix"<<endl;
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        b[i][j]=a[j][i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}
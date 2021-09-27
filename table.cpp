#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int element,result=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> element;
            if((element==1)&&(i==0||j==0||i==n-1||j==m-1))
            {
                result=2;
            }
        }
    }
    cout<<result<<endl;
    return 0;
}
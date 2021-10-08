#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(a[0]!=1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else
    {
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]!=1)
        {
            cout<<a[i]+1<<endl;
            return 0;
        }
    }
    }
    cout<<a[n-1]+1<<endl;
    return 0;
}
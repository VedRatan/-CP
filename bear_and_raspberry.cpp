#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int x,n,c,result=INT_MIN;
    cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        if((a[i]-a[i+1]-c)>result)
        result=a[i]-a[i+1]-c;
    }
    if(result<0) cout<<"0"<<endl;
    else
    cout<<result<<endl;
    return 0;
}
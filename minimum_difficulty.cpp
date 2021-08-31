#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[101],i,c=0,minn=INT_MAX;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];

    for(i=2;i<=n;i++){
        c=max(c,a[i]-a[i-1]);
    }

    for(i=2;i<n;i++){
        minn=min(minn,max(c,a[i+1]-a[i-1]));
    }
    cout<<minn;
}
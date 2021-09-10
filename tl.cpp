#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,m,maximum=INT_MIN;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int max2=INT_MIN;
    for(int i=0;i<m;i++)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        int v=a[0];
        int m1=a[n-1];
        int p=b[0];
        int result=max(2*v,m1);
        if(result<p)
        cout<<result<<endl;
        else
        cout<<"-1"<<endl;
}
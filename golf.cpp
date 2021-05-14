#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long x,k,n;
    int c=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>k;
        if(x%k==0||(n+1-x)%k==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
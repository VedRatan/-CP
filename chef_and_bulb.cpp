#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
         int n,p,k;
        cin>>n>>p>>k;
        int days=0;
    int  d=p%k;
    d-=1;
    int  x=((n-1)/k)*k;
    x=n-1-x;
    if(d>x)
    days+=(x+1)*((n-1)/k+1)+(d-x)*((n-1)/k);
    else
    days+=(d+1)*((n-1)/k+1);
    for(int i=d+1;i<=n;i+=k)
    {
        days+=1;
        if(i==p)
        {
        cout<<days<<endl;
        break;
        }
    }
    }
    return 0;
}
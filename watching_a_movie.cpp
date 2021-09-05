#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,x,l,r;
    int time=1;
    int result=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        while((l-time)>=x)
        time+=x;
        result+=(l-time);
        time=time+(l-time);
        time+=(r-l)+1;
        result+=(r-l)+1;
    }
    cout<<result<<endl;
    return 0;
}
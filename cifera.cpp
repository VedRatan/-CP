#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int k,l;
    cin>>k>>l;
    int count=0;
    while(l%k==0)
    {
        l/=k;
        count+=1;
    }
    if(l==1)
    {
        cout<<"YES"<<endl;
        cout<<count-1<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}
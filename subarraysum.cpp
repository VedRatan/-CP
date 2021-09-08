#include <bits/stdc++.h>
using namespace std;
void result()
{
    int n;
    cin>>n;
    vector<long long int>a;
    vector<long long int>prefix;
    a.resize(n);
    prefix.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        prefix[i] = a[i];
        if(i)
        prefix[i]+=prefix[i-1];
    }
    long long int sum;
    cin>>sum;
    long long int ans=0;
    map<long long int, long long int> mp;
    mp[0]++;
    for(int  j=0;j<n;j++)
    {
        ans+=mp[prefix[j]-sum];
        mp[prefix[j]]++;
    }
    cout<<ans<<endl;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    result();
    return 0;
}
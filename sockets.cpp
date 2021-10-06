#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    int devices=k,filter=0;
    for(int i=0; i<n; i++)
    cin>>a[i];
    sort(a,a+n,greater<>());
    while(filter<n&&devices<m)
    {
        devices+=a[filter]-1;
        filter+=1;
    }
    if(devices>=m) cout<<filter<<endl;
    else cout<<"-1"<<endl;
    return 0;
}
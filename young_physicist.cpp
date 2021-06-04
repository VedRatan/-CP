#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    int x,y,z;
    int resx=0, resy=0, resz=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        resx+=x; resy+=y; resz+=z;
    }
    if((resx==0)&&(resy==0)&&(resz==0))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
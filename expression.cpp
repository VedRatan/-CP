#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int a,b,c;
    int res=0;
    cin>>a>>b>>c;
    if((a+b*c)>res) res=a+b*c;
    if((a*(b+c))>res) res=a*(b+c);
    if((a*b*c)>res) res=a*b*c;
    if(((a+b)*c)>res) res=(a+b)*c;
    if((a+b+c)>res) res=a+b+c;
    cout<<res;
    return 0;
}
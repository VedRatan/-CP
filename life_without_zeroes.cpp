#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    string a,b;
    cin>>a>>b;
    int a1=stoi(a);
    int b1=stoi(b);
    int res=a1+b1;
    string res1 = to_string(res);
    int res2=0;
    a1=b1=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!='0')
        a1=a1*10 + (a[i]-'0');
        else
        continue;
    }
    for(int i=0;i<b.length();i++)
    {
        if(b[i]!='0')
        b1=b1*10 + (b[i]-'0');
        else
        continue;
    }
    for(int i=0;i<res1.length();i++)
    {
        if(res1[i]!='0')
        res2=res2*10 + (res1[i]-'0');
        else
        continue;
    }
    // cout<<a1<<" "<<b1<<" "<<res2<<endl;
    if((a1+b1)==res2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
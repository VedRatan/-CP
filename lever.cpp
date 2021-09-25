#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    string s;
    cin>>s;
    int index;
    long long leftweight=0,rightweight=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='^') index=i;
    } 
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='1'&&s[i]<='9'&&i<index)
        {
            leftweight+=(s[i]-'0')*(index-i);
        }
        else if(s[i]>='1'&&s[i]<='9'&&i>index)
        {
            rightweight+=(s[i]-'0')*(i-index);
        }
    }
    if(leftweight==rightweight) cout<<"balance"<<endl;
    else if(leftweight>rightweight) cout<<"left"<<endl;
    else cout<<"right"<<endl;

    return 0;
}
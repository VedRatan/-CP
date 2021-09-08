#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    string s,t;
    int pos=0,counter=0;
    cin>>s>>t;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]==s[counter])
        {
            counter+=1;
        }
    }
    cout<<counter+1<<endl;
    return 0;
}
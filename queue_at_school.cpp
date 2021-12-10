#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    while (t--)
    {
    for(int i=0; i<str.length()-1; i++)
    {
        if(str[i]=='B'&&str[i+1]=='G')
        {
            str[i]='G';str[i+1]='B';
            i+=1;
        }
    }
    }
    cout<<str<<endl;
    return 0;
}
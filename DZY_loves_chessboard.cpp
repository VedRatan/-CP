#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,m;
    cin>>n>>m;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
                if(s[j]=='.'&& j%2==0)
            cout<<"W";
            else if(s[j]=='.'&& j%2!=0)
            cout<<"B";
            else
            cout<<"-";
            }
            else
            {
                if(s[j]=='.'&& j%2==0)
            cout<<"B";
            else if(s[j]=='.'&& j%2!=0)
            cout<<"W";
            else
            cout<<"-";
            }
        }
        cout<<endl;
    }
    return 0;
}
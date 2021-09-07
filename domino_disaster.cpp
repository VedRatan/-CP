#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int x;string s;
        cin>>x;
        cin>>s;
        string s1="";
        for(int i=0;i<s.length();i++) {
            if(s[i]=='U')
            s1+='D';
            else if(s[i]=='D')
            s1+='U';
            else
            s1+=s[i];
        }
        cout<<s1<<endl;
    }
    return 0;
}
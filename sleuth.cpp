#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    string s;
    getline(cin, s);
    int check=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')  
            {
                cout<<"YES"<<endl;
                check=1;
            }
            break;
        }
    }
    if(!check)
    cout<<"NO"<<endl;
    return 0;
}
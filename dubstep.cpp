#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
  string s;
  int k=0;
  cin>>s;
  string s1="";
    for(int i=0;i<s.length();)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=3;
            if(k==1)
            {
                s1+=" ";
                k=0;
            }
        }
        else
        {
            s1+=s[i];
            i++;
            k=1;
        }
    }
    cout<<s1<<endl;
    return 0;
}
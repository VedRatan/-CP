#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    map <char, int> check;
    string s ;
    getline(cin, s);
    int l=s.length();
    int count=0;
    for(int i=0;i<26;i++)
    {
        check['a'+i]=0;
    }
    // for(auto i=check.begin();i!=check.end();i++)
    // {
    //     cout<<'\t'<<i->first<<'\t'<<i->second<<endl;
    // }
    for(int i=0;i<l;i++)
    {
        if(s[i]==' '||s[i]=='{'||s[i]=='}'||s[i]==',')
         continue;
        check[s[i]]++;
    }
    for(int i=0;i<26;i++)
   {
      if(check['a'+i]!=0)
      count++;
   }
     cout<<count;
    return 0;
}
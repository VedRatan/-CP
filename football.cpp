#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    string s1;
    map<string,int>s;
    for(int i=0;i<n;i++)
    {
        cin>>s1;
        s.insert(pair<string,int>(s1,0));
        s[s1]+=1;
    }
    int max=INT_MIN;
    string result;
    for(auto i:s)
    {
        if(i.second>max)
        {
            max=i.second;
            result=i.first;
        }
    }
    cout<<result<<endl;
    return 0;
}
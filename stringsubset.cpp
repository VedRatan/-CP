#include <bits/stdc++.h>
using namespace std;
void printsub(string str, string curr=" ", int index=0)
{
    if(index==str.length())
    {
        cout<<curr;
        return;
    }
    printsub(str,curr,index+1);
    printsub(str,curr+str[index],index+1);
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    string s="ABC";
    printsub(s);
    return 0;
}
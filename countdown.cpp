#include <bits/stdc++.h>
using namespace std;
main()
{
int t;
cin>>t;
while(t--)
{
int n,result;
string number;
cin>>n>>number;
result=number[n-1]-'0';
for(int i=0;i<n-1;i++)
result+=(number[i]=='0'?0:number[i]-47);
cout<<result<<endl;
}
}

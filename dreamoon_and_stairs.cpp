#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,m;
    cin>>n>>m;
    int twos=2;
    int ones=1;
    int i=1; 
    int count=-1;
    if(m>n)
    cout<<count<<endl;
    else
    {
        if(n%2==0)
        count=n/2;
        else
        count=n/2+1;
        while(count%m!=0)
        count++;
        cout<<count<<endl;
    }
    return 0;
}
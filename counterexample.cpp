#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    long long int l,r,a,b,c,d;
    cin>>l>>r;
    if(l%2!=0)
    l+=1;
    if(r-l<2)
    cout<<"-1"<<endl;
    else
    {
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    long long int l,r,a,b;
    long int max,p;
    cin>>t;
    while(t--){
        max=INT_MIN;
        cin>>l>>r;
        if((r/2+1)<l)
        max=r%l;
        else
        max=r%(r/2+1);
        cout<<max<<endl;
    }
    return 0;
}
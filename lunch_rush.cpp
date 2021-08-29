#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,k,f,t,result=INT_MIN;
    int calculate=0;
    cin>>n>>k;
    while(n--) {
        cin>>f>>t;
        calculate= (t>k)?f-(t-k):f;
        if(calculate>result) result=calculate;
    }
    cout<<result<<endl;
    return 0;
}
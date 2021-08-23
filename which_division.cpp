#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    int r;
    cin>>t;
    while(t--) {
        cin>>r;
        if(r>=2000)
        cout<<"1"<<endl;
        else if(r>=1600&&r<2000)
        cout<<"2"<<endl;
        else
        cout<<"3"<<endl;
    }
    return 0;
}
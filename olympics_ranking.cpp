#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int g1, s1, b1, g2, s2, b2;
    int t;
    cin>>t;
    while(t--) {
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        if((g1+s1+b1)>(g2+s2+b2))
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;
    }
    return 0;
}
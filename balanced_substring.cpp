#include <bits/stdc++.h>
using namespace std;
 
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t,n;
    cin>>t;
    while(t--) {
        int counta=0,countb=0,start=100000,end=-1000;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++) {
            counta=0, countb=0;
            for(int j=i;j<s.length();j++) {
                if(s[j]=='a') counta+=1;
                if(s[j]=='b') countb+=1;
                if(counta>=1&&countb>=1&&(counta==countb))
                {
                    start=i+1; end=j+1;
                }
            }
        }
        if(start==100000 && end ==-1000) cout<<"-1"<<" -1"<<endl;
        else cout<<start<<" "<<end<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int q,n;
    cin>>q;
    while(q--){
        int counter1=0;
        int counter=0;
        int counter2=0;
        int counter3=0;
        cin>>n;
    char s[n];
    char t[n];
    cin>>s;
    cin>>t;
    int minn;
    int result=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'&&t[i]=='0')
        counter1++;
        if(t[i]=='1'&&s[i]=='0')
        counter2++;
        if(s[i]=='1'&&t[i]=='1')
        counter++;
        if(s[i]=='0'&&t[i]=='0')
        counter3++;
        }
    minn=min(counter1,counter2);
        result+=minn;
        counter1-=minn;
        counter2-=minn;
        minn=min(counter,counter1+counter2+counter3);
        result+=minn;
        counter-=minn;
        result+=counter/2;
        cout<<result<<endl;   
        }
    return 0;
}
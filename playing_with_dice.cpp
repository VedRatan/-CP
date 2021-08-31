#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int a,b;
    int first=0,draw=0,second=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++) {
        if(abs(a-i)<abs(b-i)) first+=1;
        else if(abs(a-i)>abs(b-i)) second+=1;
        else draw+=1;
    }
    cout<<first<<" "<<draw<<" "<<second<<endl;
    return 0;
}
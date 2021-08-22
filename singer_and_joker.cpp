#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,totaltime;
    cin>>n;
    cin>>totaltime;
    int check=totaltime;
    int counter=0;
    int t[n];
    for(int i = 0; i < n; i++)
    {
        cin>>t[i];
        counter+=t[i]+10;
    }
    counter-=10;
    if(counter<=totaltime)
    cout<<(totaltime-(counter-(n-1)*10))/5<<endl;
    else
    cout<<"-1"<<endl;
    return 0;
}
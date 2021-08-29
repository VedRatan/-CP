#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,counter=0;
    pair<int, int>laptops[100000];
    cin>>n;
     for(int i=0; i<n; i++)
    cin>>laptops[i].first>>laptops[i].second;
    sort(laptops,laptops+n);
    for(int i=0;i<n-1;i++)
    {
        if((laptops[i].first<laptops[i+1].first)&&(laptops[i].second>laptops[i+1].second))
        counter+=1;
    }
    if(counter>0)
    cout<<"Happy Alex"<<endl;
    else
    cout<<"Poor Alex"<<endl;
    return 0;
}
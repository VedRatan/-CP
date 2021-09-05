#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,k,counter=0;;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n; i++)
    cin>>a[i];
    deque <int> gt;
    int highest;
    for(int i=0;i<n-2;i++)
    {
        highest=INT_MIN;
        counter=i;
        while(counter<(k+i))
        {
        gt.push_back(a[counter]);
        counter+=1;
        if(highest<gt.at(0))
        highest=gt.at(0);
        gt.pop_front();
        }
        cout<<highest<<" ";
    }
    return 0;
}
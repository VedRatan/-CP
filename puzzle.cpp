#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int arr[10000]={0};
    int n,m,t,count=0,min=1200;
    cin>>n>>m;
    vector <int> puzzles;
    for(int i=0;i<m;i++)
    {
        cin>>t;
        ++arr[t];
        puzzles.push_back(t);
    }
    for(int i=0;i<50;i++)
    {
       if(arr[i]>=n) count++;
    }
    if(count!=0)
    cout<<"0";
    else
    {
        int diff;
        sort(puzzles.begin(),puzzles.end());
        for(int i=0;i<puzzles.size()-n+1;i++)
        {
            diff=puzzles[n-1+i]-puzzles[i];
            if(min>diff)
            min=diff;
        }
        cout<<min;
    }
    return 0;
}
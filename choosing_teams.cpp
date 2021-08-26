#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,k,student;
    int result=0,counter=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>student;
        if(student<5 && (student+k)<=5)
        counter+=1;
        if(counter==3)
        {
            result++;
            counter=0;
        }
    }
    cout<<result;
    return 0;
}
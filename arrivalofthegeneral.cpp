#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
     cin>>a[i];
    int count=0;
    int index1,index2;
    int smallest=1000;
    int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
            index1=i;
        }
         if(smallest>=a[i])
        {
            smallest=a[i];
            index2=i;
        }
    }
    if(index2<index1)
    index2+=1;// humne isme smallest aur largest waale ko 2 baar exchange kar diya hai is liye 1 minus karna padega
    count=(index1)+(n-1-index2);
    cout<<count;

}
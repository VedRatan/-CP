#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
ll n,i,sum=0,max=0,min=INT_MIN;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}
 
for(i=0;i<n;i++){
    sum+=arr[i];
    if(sum<=0){
        if(sum>min){
            min = sum;
        }
        sum=0;
    }
    else{
        if(sum>max){
            max=sum;
        }
    }
}
if(max==0){
    cout<<min;
}
else
cout<<max;
 
return 0;
}
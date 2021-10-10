#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,start=0,end=0,counter=0; 
    string s;
    cin>>n>>s;
    char c;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='.')
        {   
           if(s[i-1]=='.'&&s[i]=='L')
           {
               end=i-1; 
           }
             if(s[i+1]=='.'&&s[i]=='L')
           {
               start=i;
           }
           else
            {
            c=s[i];
            start=i-counter;
            counter+=1;
             if(s[i+1]!=c&&s[i+1]!='.')
            {
                end=i;
                break;  
            }
            else if(s[i+1]!=c&&s[i+1]=='.')
            {
                end=i+1;
                break;
            }
        }
        }
    }
    cout<<start+1<<" "<<end+1<<endl;
    return 0;
}
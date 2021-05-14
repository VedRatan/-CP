#include <iostream>
#include<algorithm>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int counter=0;
        cin>>n;
        string s;
        cin>>s;
        string s1="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s[i+1])
            {
                if(s1.find(s[i+1])!=std::string::npos)
                {
                    counter=1;
                    cout<<"NO"<<endl;
                    break;
                }
                else
                {
                    s1=s1+s[i];
                }
            }
        }
        if(counter==0)
        cout<<"YES"<<endl;  
    }
    return 0;
}
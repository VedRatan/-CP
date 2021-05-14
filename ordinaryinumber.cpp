#include <iostream>
#include<algorithm>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    int count=0;
    int eleven=0;
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            if(j>=1&&j<=9)
            count++;
            else if(j>=10&&j<100){
                 eleven=11;
                if(j%eleven==0)
                count++;
            }
            else if(j>=100&&j<1000)
            {
                eleven=111;
                if(j%eleven==0)
                count++;
            }
            else if(j>=1000&&j<10000)
            {
                eleven=1111;
                if(j%eleven==0)
                count++;
            }
            else if(j>=10000&&j<100000)
            {
                eleven=11111;
                if(j%eleven==0)
                count++;
            }
             else if(j>=100000&&j<1000000)
            {
                eleven=111111;
                if(j%eleven==0)
                count++;
            }
            else if(j>=1000000&&j<10000000)
            {
                eleven=1111111;
                if(j%eleven==0)
                count++;
            }
            else if(j>=10000000&&j<100000000)
            {
                eleven=11111111;
                if(j%eleven==0)
                count++;
            }
            else if(j>=100000000&&j<1000000000)
            {
                eleven=111111111;
                if(j%eleven==0)
                count++;
            }
            else if(j>=100000000&&j<100000000000)
            {
                eleven=1111111111;
                if(j%eleven==0)
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
}
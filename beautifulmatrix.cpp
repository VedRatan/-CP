#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    cin>>a[i][j];
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                if(i==2&&j==2)
                {
                  count=0;
                }
                else if(j==2&&i>2)
                count+=i-2;
                else if(j>2&&i==2)
                count+=j-2;
                else if(j==2&&i<2)
                count+=2-i;
                else if(i==2&&j<2)
                count+=2-j;
                else if(i>2&&j>2)
                count+=(i-2)+(j-2);
                else if(i<2&&j<2)
                count+=(2-i)+(2-j);
                else if(i<2&&j>2)
                count+=(2-i)+(j-2);
                else if(i>2&&j<2)
                count+=(i-2)+(2-j);
                cout<<count<<endl;
                exit(0);
            }
        }
    }
}
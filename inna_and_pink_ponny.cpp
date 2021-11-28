#include<bits/stdc++.h>
using namespace std;
int n,i,j,m,a,b,mn=1e7;
int main()
{
    scanf("%d%d%d%d%d%d",&n,&m,&i,&j,&a,&b);
    int t1=i-1,t2=j-1;
    if (t1%a==0&&t2%b==0&&(t1/a==t2/b||(abs((t1/a)-(t2/b))%2==0&&(((t1/a)||((n-t1-1)/a))&&((t2/b)||((m-t2-1)/b))))))if (max((t1/a),(t2/b))<mn)mn=max((t1/a),(t2/b));
    t1=i-1,t2=m-j;
    if (t1%a==0&&t2%b==0&&(t1/a==t2/b||(abs((t1/a)-(t2/b))%2==0&&(((t1/a)||((n-t1-1)/a))&&((t2/b)||((m-t2-1)/b))))))if (max((t1/a),(t2/b))<mn)mn=max((t1/a),(t2/b));
    t1=n-i,t2=j-1;
    if (t1%a==0&&t2%b==0&&(t1/a==t2/b||(abs((t1/a)-(t2/b))%2==0&&(((t1/a)||((n-t1-1)/a))&&((t2/b)||((m-t2-1)/b))))))if (max((t1/a),(t2/b))<mn)mn=max((t1/a),(t2/b));
    t1=n-i,t2=m-j;
    if (t1%a==0&&t2%b==0&&(t1/a==t2/b||(abs((t1/a)-(t2/b))%2==0&&(((t1/a)||((n-t1-1)/a))&&((t2/b)||((m-t2-1)/b))))))if (max((t1/a),(t2/b))<mn)mn=max((t1/a),(t2/b));
    if(mn!=1e7)printf("%d\n",mn);else puts("Poor Inna and pony!");
    return 0;
}
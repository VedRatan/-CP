#include <bits/stdc++.h>
using namespace std;
class ved
{
    int a, b;
    public:
    void setnum(int a ,int b)
    {
        this->a = a;
        this->b = b;
    }
    int getsum()
    {
        return a+b;
    }
};
int main()
{
    ved v;
    int a,b;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    v.setnum(a,b);
    cout << "the sum is :"<<v.getsum() << endl;
    return 0;
}
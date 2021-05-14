#include <bits/stdc++.h>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setvalue();
    int getvalue1();
    int getvalue2();
};
void Base ::setvalue()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getvalue1()
{
    return data1;
}
int Base ::getvalue2()
{
    return data2;
}
class Derived : public Base{
    int data3;
    public:
    void process();
    void display();
};
void Derived :: process()
{
    data3 =data2*getvalue1();
}
void Derived :: display()
{
    cout<<"the value of data 1 is: "<<getvalue1()<<endl;
    cout<<"the value of data 2 is: "<<data2<<endl;
    cout<<"the value of data 3 is: "<<data3<<endl;
}
 int main(){    
      Derived d;
     d.setvalue();
     d.process();
     d.display();
     return 0;
 }
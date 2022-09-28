#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"\n base constuctor called...";
    }
    ~base()
    {
       cout<<"\n base destuctor called..."; 
    }
};
class base1
{
    public:
    base1()
    {
         cout<<"\n base1 constuctor called...";
    }
    ~base1()
    {
       cout<<"\n base1 destuctor called..."; 
    }
};
int main()
{
    Derived D;
}
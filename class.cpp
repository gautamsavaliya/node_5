#include<iostream>
using namespace std;
class car
{
    int num;
    public:
    void set_no(int n)
    {
        num=n;
    }
    int get_no()
    {
        return num;
    }
};
int main()
{
    car kiaseltos;
    kiaseltos.set_no(333);
    cout<<"\n car no:"<<kiaseltos.get_no();
}
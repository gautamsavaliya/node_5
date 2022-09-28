#include<iostream>
using namespace std;
class findage
{
    int age;
    public:
    findage(int n)
    {
        age=n;
        cout<<"\n Age :"<<age;
    }
    findage(findage &new_age)
    {
        age=new_age.age;
        cout<<"\nAge:"<<age;
    }
};
int main()
{
    findage person1(20);
    findage person2(person1);
    return 0;
}
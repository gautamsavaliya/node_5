#include<iostream>
using namespace std;
class bank
{
    int balance;
    public:
    void bank(int n)
    {
        balance=n;
    }
    int deposit(int a)
    {
        balance+=a;
        return balance;
    }
    int withdraw(int a)
    {
        if(a>balance)
        {
            cout<<"\n INVALID BALANCE";
        }
        else
        {
            balance-=a;
            cout<<"\n";
        }
        return balance;
    }
    int balance(int acc)
    {
        cout<<"ACCOUNT NO:"<<acc<<endl;
        cout<<"BALANCE:"<<balance<<endl;
    }
};
int main()
{
    int choice,a,balance,acc;
    bank statment(1000);
    while(1)
    {
        statment;
        cout<<"\n1.ENTER ACCOUNT NO:"<<endl;
        cout<<"\n2.DEPOSIT MONEY"<<endl;
        cout<<"\n3.WITHDRAW MONEY"<<endl;
        cout<<"\n4.BALANCE ENQUIRY"<<endl;
        cout<<"\n5.EXIT"<<endl;
        cout<<"\n ENTER CHOICE";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\n ENTER ACCOUNT NO:";
            cin>>acc;
            break;
            case 2:
            cout<<"\n ENTER DEPOSIT AMOUNT:";
            cin>>a;
            cout<<"\n TOTAL AMOUNT AFTER DEPOSIT:"<<statment.deposit(a);
            break;
            case 3:
            cout<<"\n ENTER WITHDRAW AMOUNT:";
            cin>>a;
            stament.withdraw(a);
            break;
            case 4:
            statment.balance(acc);
            break;
            case 5:
            exit(1);
            break;
            default:
            cout<<"\n INVALID CHOICE";
        }
    }while(choice=5);
}
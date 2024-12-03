#include<iostream>
using namespace std;
class person
{
    char name[30];
    char address;
    public:
    void read()
    {
        cout<<"enter name:";
        cin>>name;
        cin>>address;
    }
    void display()
    {
        cout<<name<<endl;
        cout<<address<<endl;
    }
};
class Account:public person
{
    int acc_no;
    float balance;
    public:
    void set_data(int acc,float bal)
    {
        acc_no=acc;
        balance=bal;
    }
    void get_data()
    {
        cout<<acc_no;
        cout<<"\nbal:"<<balance<<endl;
    }
    void deposit(float amount)
    {
        balance+=amount;
    }
    void withdraw(float amount2)
    {
        if(amount2>balance)
        {
            cout<<"error";
        }
        else
        {
            balance-=amount2;    
        }
    }
};
int main()
{
    Account acc1;
    acc1.set_data(121004,0.0);
    acc1.read();
    acc1.display();
    acc1.deposit(500.0);
    acc1.withdraw(300.0);
    acc1.get_data();
}
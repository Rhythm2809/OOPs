#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;
    public:
    void getdata(void);
    void display(void);
};
void person :: getdata(void)
{
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
}
void person :: display(void)
{
    cout<<name<<"\n"<<age<<endl;
}
int main()
{
    person oba;
    oba.getdata();
    oba.display();
    return 0;
}

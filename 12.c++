#include<iostream>
using namespace std;
class person
{
    public:
    char name[30];
    int age;
};
class student : private person
{
    public:
    void display()
    {
        cout<<name<<"\n"<<age<<endl;
    }
    void setter()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }
};
int main()
{
    student s1;
    s1.setter();
    s1.display();
    return 0;
}
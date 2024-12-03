#include<iostream>
using namespace std;
class person
{
    private:
    char name[30];
    public:
    void read()
    {
        cout<<"Enter Name:"<<endl;
        cin>>name;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
    }
};
class sports:public person
{
    private:
    char sname[30];
    int m;
    public:
    void sread()
    {
        cout<<"Enter Sports Name:"<<endl;
        cin>>sname;
        cout<<"Enterr Number of Medal:"<<endl;
        cin>>m;
    }
    void sdisplay()
    {
        cout<<"Sports Name:"<<sname<<endl;
        cout<<"Medals:"<<m<<endl;
    }
};
class student:public sports
{
    private:
    int rno;
    public:
    void Rread()
    {
        cout<<"Enter Roll No.:"<<endl;
        cin>>rno;
    }
    void rdisplay()
    {
        cout<<"Roll No:"<<rno<<endl;
    }
};
int main()
{
    student s1;
    s1.read();
    s1.Rread();
    s1.sread();
    s1.display();
    s1.rdisplay();
    s1.sdisplay();
    return 0;
}
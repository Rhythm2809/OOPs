#include<iostream>
using namespace std;
class Marks
{
    private:
    int rno;
    int percentage;
    public:
    Marks()
    {
        rno=0;
        percentage=0;
    }
    Marks(int R,int P)
    {
        rno=R;
        percentage=P;
    }
    void displaymarks()
    {
        cout<<"Rollno:"<<rno<<endl;
        cout<<"Percentage:"<<percentage<<endl;
    }
};
class student
{
    private:
    Marks objM;
    string name;
    public:
    void getname()
    {
        cout<<"Enter Name:";
        cin>>name;
    }
    void displayresult(Marks obj)
    {
        objM=obj;
        cout<<"Name:"<<name<<endl;
        objM.displaymarks();
    }
};
int main()
{
    Marks mks[100]={Marks(1,90),Marks(2,95),Marks(3,89),Marks(4,100)};
    student std[100];
    for(int i=0;i<4;i++)
    {
        std[i].getname();
    }
    for(int i=0;i<4;i++)
    {
        std[i].displayresult(mks[i]);
    }
    return 0;
}
#include<iostream>
using namespace std;
class sports
{
    public:
    char sp_name[30];
    int no_of_medals;
};
class sportname : private sports
{
    public:
    void display()
    {
        cout<<sp_name<<"\n"<<no_of_medals<<endl;
    }
    void setter()
    {
        cout<<"Enter Name of sport:";
        cin>>sp_name;
        cout<<"Enter no of medals won:";
        cin>>no_of_medals;
    }
};
int main()
{
    sportname s1;
    s1.setter();
    s1.display();
    return 0;
}
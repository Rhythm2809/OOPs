#include<iostream>
using namespace std;
class employee
{
private:
    int salary;
public:
    void setsalary(int s)
    {
        salary=s;                
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    employee obj;
    int a;
    cout<<"Enter Salary:";
    cin>>a;
    obj.setsalary(a);
    cout<<obj.getsalary()<<endl;
    return 0;
}
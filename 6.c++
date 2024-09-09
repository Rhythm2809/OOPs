//nested member function
#include<iostream>
using namespace std;
class sample
{
    int m;
    void read(void)
    {
        cin>>m;
    }
    public:
    void update(void);
    void write(void);
};
void sample :: update()
{
    read();
}
void sample :: write()
{
    cout<<m<<endl;
}
int main()
{
    sample obj1;
    obj1.update();
    obj1.write();
    return 0;
}
#include<iostream>
using namespace std;
class Add
{
    int a,b;
    public:
    void get()
    {
        cout<<"\nEnter First number: ";
        cin >> a;
        cout<<"\nEnter Second number: ";
        cin >> b;
    }
    void disp()
    {
        cout << a <<"+"<<b <<"\n";
    }
    void sum(Add,Add);
};
void Add::sum(Add x, Add y)
{
    int sum = x+y;
    cout << sum;
}
int main()
{
    Add ob1,ob2,ob3;
    ob1.get();
    ob2.get();
    ob1.disp();
    return 0;

}


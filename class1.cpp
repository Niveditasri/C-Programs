#include<iostream>
using namespace std;
class sample
{
    private:
    float x;
    float y;
    public:
    void get()
    {
        cout << "Enter any two numbers:" << endl;
        cin >> x >> y;
    }
    void display()
    {
        cout << "First number" << x << endl;
        cout << "Second number "<< y << endl;
        cout << "Sum" << sum() << endl;
        cout << "Multiplication " << mul() << endl;
        cout << "Division "<< div() << endl;
        cout << "Subtraction" << sub() << endl;
    }
    float sum()
    {
        return (x+y);
    }
    float mul()
    {
        return (x*y);
    }
    float div()
    {
        return (x/y);
    }
    float sub()
    {
        return (x-y);
    }
};
int main()
{
    sample obj;
    obj.get();
    obj.display();
    obj.sum();
    obj.mul();
    obj.div();
    obj.sub();

}
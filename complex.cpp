#include<iostream>
using namespace std;
class complex
{
    private:
    int re, img;
    public:
    void get()
    {
        cout << "Enter real part:";
        cin >> re;
        cout << "Enter imaginary part:";
        cin >> img;
    }
    void display()
    {
        cout<< re <<"+" <<"i" <<img;
    }
    void sum(complex *com1, complex *com2)
    {
        re= com1->re + com2->re;
        img = com1->img + com2->img;
    }
    void display_sum()
    {
        cout << re << "+" << "i" << img;
    }

};
int main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    c3.sum(&c1,&c2);
    c3.display_sum();
    return 0;
}
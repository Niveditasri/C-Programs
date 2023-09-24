#include<iostream>
using namespace std;
class complex
{
    int re,im;
    public:
    void get()
    {
        cout<<"\nEnter Real part: ";
        cin >> re;
        cout<<"\nEnter Imaginary part: ";
        cin >> im;
    }
    void disp()
    {
        cout << re <<"+"<<im<<"i"<<"\n";
    }
    void sum(complex,complex);
};
void complex::sum(complex a, complex b)
{
    re=a.re+b.re;
    im=a.im+b.im;

}
int main()
{
    complex c1,c2,c3;
    cout<<"Enter 1st complex number: \n";
    c1.get();
    cout<<"Enter 2nd complex number: \n";
    c2.get();
    cout<<"\nThe 1st complex number is: ";
    c1.disp();
    c3.sum(c1,c2);
    cout<<"\nThe sum of two complex numbers are:";
    c3.disp();
    return 0;
}
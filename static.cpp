#include<iostream>
using namespace std;
class example
{
    static int number;
    int n;
    public:
    void set_n(){
        n = ++number;
    }
    void show_n()
    {
        cout << "value of n ="<< n << endl;
    }
    static void show_number()
    {
        cout<< "Value of number=" << number << endl;
    }
};
int example :: number;
int main()
{

Example example1, example2;
example1.set_n();
example2.set_n();
example1.show_n();
example2.show_n();
Example::show_Number();
return 0;
}


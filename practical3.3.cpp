#include<iostream>
using namespace std;
class class_2;
class class_1
{
    protected:
    int num1;
    public:
    class_1()
    {
        num1=10;
    }
    void show()
    {
        cout<<"\nValue of class1:"<<num1;
    }
    friend void swap(class_1 *num1, class_2 *num2);
};
class class_2
{
    protected:
    int num2;
    public:
    class_2()
    {
        num2=20;    
    }
    void show()
    {
        cout<<"\nValue of class 2:"<<num2;
    }
    friend void swap(class_1 *num1, class_2 *num2);
};
void swap(class_1 *no1,class_2 *no2)
{
    int no3;
    no3 = no1 -> num1;
    no1->num1 = no2 -> num2;
    no2 -> num2 = no3;
}
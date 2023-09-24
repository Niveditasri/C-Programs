#include<iostream>
using namespace std;
class fact
{
    public:
    void factorial()
    {
        int fact = 1;
        int n;
        cout << " Enter a number:";
        cin >> n;
        for(int i=n;i>1;i--)
        {
            fact = fact * i;
        }
        cout << fact;
    }
};
int main()
{
    fact ob;
    ob.factorial();
    return 0;
}
#include <iostream>
using namespace std;

class construct 
{
public:
	int a=12, b=32;

// Default Constructor

};
int main()
{
// Default constructor called automatically
// when the object is created
construct c;
cout << "a: " << c.a << endl
		<< "b: " << c.b;
	return 1;
}



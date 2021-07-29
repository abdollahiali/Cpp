#include <iostream>
using namespace std;
class CL {
public:
	CL(int i) { val=i; } // constructor
	int val;
	int operation(int x) { return val+val+x; }
};

int main()
{
	int CL::*pi; // pointer to class attribute
	int (CL::*pf)(int); // pointer to class method

	pi = &CL::val;
	pf = &CL::operation;

	CL ob[5] = {1, 2, 3, 4, 5};

	for(int i=0; i<5; i++) 
		cout << ob[i].*pi << ", " << (ob[i].*pf)(i) << endl;

	return 0;
}
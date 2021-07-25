#include <iostream>

using namespace std;

int main()
{
    union {
        int a;
        float f;
    };

    f = 1.0;
    cout << "Hexadecimal representation of float value of " << f << " is " << hex << a <<  endl;
    return 0;
}
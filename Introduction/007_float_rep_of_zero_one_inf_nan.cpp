/*

float representation of
+0
-0
+1
-1
+ inf
- inf
nan

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = 0x00000000;
    cout << "\npositive zero = " << *((float *)&i)<< "\t\t its representation: 0x" << setw(8) << setfill('0') << hex << i;

    i = 0x80000000;
    cout << "\nnegative zero = " << *((float *)&i)<< "\t\t its representation: 0x" <<  setw(8) << setfill('0') << hex << i;
	
    i = 0x3f800000;
    cout << "\npositive one = " << *((float *)&i)<< "\t\t its representation: 0x" <<  setw(8) << setfill('0') << hex << i;
	
    i = 0xbf800000;
    cout << "\nnegative one = " << *((float *)&i)<< "\t\t its representation: 0x" <<  setw(8) << setfill('0') << hex << i;

    i = 0x7f800000;
    cout << "\npositive infinity = " << *((float *)&i)<< "\t\t its representation: 0x" <<  setw(8) << setfill('0') << hex << i;

    i = 0xff800000;
    cout << "\nnegative infinity = " << *((float *)&i)<< "\t its representation: 0x" <<  setw(8) << setfill('0') << hex << i;
    
    cout << "\n\nThere are many ways to respresent NaN. We show four ways in the following.";

    i = 0x7f800001;
    cout << "\nNaN = " << *((float *)&i)<< "\t\t\t its representation: 0x" <<  setw(8) << setfill('0') << hex << i;

    i = 0x7f800002;
    cout << "\nNaN = " << *((float *)&i)<< "\t\t\t its representation: 0x" <<  setw(8) << setfill('0') << hex << i;

    i = 0xff800001;
    cout << "\nNaN = " << *((float *)&i)<< "\t\t\t its representation: 0x" <<  setw(8) << setfill('0') << hex << i;

    i = 0xff800002;
    cout << "\nNaN = " << *((float *)&i)<< "\t\t\t its representation: 0x" <<  setw(8) << setfill('0') << hex << i << endl;

    return 0;
}

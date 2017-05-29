/*
Reverse a string.

For example:   "abcd" --> "dcba"

Author: Ali Abdollahi
Date:   5/29/2017
*/
#include <iostream>

using namespace std;

void reverse_string(char *str);

string line(50,'-');

int main(){
    char str[21]; // enough space for 20 characters and the NULL at the end of the string
    cout << line << endl;
    cout << "Enter a string (at most 20 characters): ";
    cin.get(str, 20); // get a string with maximum lenght of 20
    reverse_string(str);
    cout << "The reversed version of the string: " << str << endl;
    cout << line << endl;


    return 0;
}

void reverse_string(char *str){
    char *tail;
    tail = str;
    while(*tail)
        ++tail;
    --tail;
    char tmp;
    while(str<tail){
        tmp = *str;
        *str++ = *tail;
        *tail-- = tmp;
    }
}

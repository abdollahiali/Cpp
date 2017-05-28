/*
Rotates a string n characters to right.

Author: Ali Abdollahi
Date:   5/28/2017
*/
#include <iostream>

using namespace std;

void rotate_right(char *str, int n);
unsigned int gcd(unsigned int a, unsigned int b);

string line(50,'-');

int main(){
    char str[21]; // enough space for 20 characters and the NULL at the end of the string
    cout << line << endl;
    cout << "Enter a string (at most 20 characters): ";
    cin.get(str, 20); // get a string with maximum lenght of 20
    int n;
    cout << "Enter the number of right-shifts: ";
    cin >> n;
    rotate_right(str, n);
    cout << "The shifted version of the string: " << str << endl;
    cout << line << endl;


    return 0;
}

void rotate_right(char *str, int n){
    char *tail;
    tail = str;
    while(*tail)
        ++tail;
    int len_str;
    len_str = tail - str;
    n = n%len_str; // For example if str = "abcd" and we want to rotate it to right 6 times it is the same as
                   // rotating it 6%4 times (which is two times)
    if(n==0)
        return;
    else{
        int i, j;
        char cp_source, cp_dest;
        int loop = gcd(len_str, n);
        for(int k=0; k<loop; k++){
            i = k;
            j = (i + n)%len_str;
            cp_source = str[i];
            do{
                cp_dest = str[j];
                str[j] = cp_source;
                i = j;
                j += n;
                j %= len_str;
                cp_source = cp_dest;
            }while(j!=k);

            str[j] = cp_source;
        }
    }
}


unsigned int gcd(unsigned int a, unsigned int b){
    if(a<b){
    unsigned int tmp;
    tmp = a;
    a = b;
    b = tmp;
    }
    while(b != 0){
        unsigned int rem;
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

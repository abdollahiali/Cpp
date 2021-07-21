/*
Shows whether a string is palindrome or not.
A string is palindrome if it is the same from-left-to-right and from-right-to-left

For example: "abcddcba" is palindrome.

Author: Ali Abdollahi
Date:   5/27/2017
*/
#include <iostream>

using namespace std;

bool is_palindrome(char *str);
void display_palindromeness(char *str);

string line(50,'-');

int main(){
    char str[21]; // enough space for 20 characters and the NULL at the end of the string
    cout << line << endl;
    cout << "Enter a string (at most 20 characters): ";
    cin.get(str, 20); // get a string with maximum lenght of 20
    display_palindromeness(str);
    cout << line << endl;


    return 0;
}


bool is_palindrome(char *str){
    if(!*str)
        return true; // empty string is assumed as palindrome
    else{
        char *head, *tail;
        head = tail = str;
        while(*tail)
            ++tail;
        --tail;
        while(head<tail){
            if(*head++ != *tail--)
                return false;
        }
        return true;
    }
}


void display_palindromeness(char *str){

    bool res;
    res = is_palindrome(str);
    cout << "String \"" << str << "\" is ";
    if (res)
        cout << "Palindrome." << endl;
    else
        cout << "Not Palindrome." << endl;
}

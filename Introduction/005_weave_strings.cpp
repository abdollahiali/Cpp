/*
Weaving two strings.

For example:   str1 = "abcd"
               str2 = "efgh"
               weave = "aebfcfdh"

Author: Ali Abdollahi
Date:   5/29/2017
*/
#include <iostream>

using namespace std;

void weave_strings(char *str1, char *str2, char *str_weaved);

string line(50,'-');

int main(){
    char str1[21]; // enough space for 20 characters and the NULL at the end of the string
    char str2[21];
    char str[41];
    cout << line << endl;
    cout << "Enter a string (at most 20 characters): ";
    cin.get(str1, 20); // get a string with maximum lenght of 20
    cout << "Enter a string (at most 20 characters): ";
    cin.ignore(256, '\n');
    cin.get(str2, 20); // get a string with maximum lenght of 20
    //cin >>  str2;
    weave_strings(str1, str2, str);
    cout << "The weaved string: " << str << endl;
    cout << line << endl;


    return 0;
}

void weave_strings(char *str1, char *str2, char *str){
    bool flag_str1_short;
    int len_str1, len_str2;
    len_str1 = len_str2 = 0;
    int i;
    for(i=0; str1[i]; i++)
        ++len_str1;
    for(i=0; str2[i]; i++)
        ++len_str2;
    int min_len;
    if(len_str1<len_str2){
        min_len = len_str1;
        flag_str1_short = true;
    }
    else{
        min_len = len_str2;
        flag_str1_short = false;
    }
    for(i=0; i<min_len; i++){
        *str++ = *str1++;
        *str++ = *str2++;
    }
    if(flag_str1_short){
        while(*str2)
            *str++ = *str2++;
        *str = *str2;
    }
    else{
        while(*str1)
            *str++ = *str1++;
        *str = *str1;
    }
}

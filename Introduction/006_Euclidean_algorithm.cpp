/*
Euclidean algorithm:
Finds gcd(x, y) and also finds A and B such that gcd(x, y) = A*x + B*y

Author: Ali Abdollahi
Date:   5/28/2017
*/
#include <iostream>

using namespace std;

void divide(int x, int y, int &q, int &r);
void euclidean_alg(int x, int y, int &A, int &B, int &g);

string line(50,'-');

int main(){
    cout << line << endl;
    int x, y;
    cout << "Enter a number (positive or negative): ";
    cin >> x;
    cout << "Enter a number (positive or negative): ";
    cin >> y;


    int A, B, g;
    euclidean_alg(x, y, A, B, g);
    cout << "GCD of " << x << " and " << y << " is " << g << ".";
    cout << "\nAlso, we have: " << g <<" = (" << A << ")*(" << x << ") + (" << B << ")*(" << y << ")\n" ;
    cout << line << endl;

    return 0;
}

void divide(int x, int y, int &q, int &r){
    q = x/y;
    r = x%y;

    if(x<0){
        if(y>0){
            r += y;
            --q;
        }
        else{
            r -= y;
            ++q;
        }
    }
}

void euclidean_alg(int x, int y, int &A, int &B, int &g){
    int q, r;
    if((x==0) || (y==0)){
        A = 0;
        B = 0;
        g = 0;
        cout << "\nAt least one of two numbers is zero.\n";
        return;
    }
    divide(x, y, q, r);
    if(r==0){
        A = 0;
        B = 1;
        g = y;
    }
    else{
        x = y;
        y = r;
        euclidean_alg(x, y, A, B, g);
        int cp_A;
        cp_A  = A;
        A = B;
        B = cp_A - B * q;
    }
}

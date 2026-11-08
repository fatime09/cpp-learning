#include <iostream>
#include <cmath>
using namespace std;
double cem (double a, double b) {
    return a+b;
}
int main () {
    cout << "cem1=" << cem(4,6) << endl;
    cout << "cem2=" << cem(2.5, 3.5) << endl;
    cout << "cem3=" << cem(10,20) << endl;
    return 0; 
}
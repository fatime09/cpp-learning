#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a=3.5, b=1.7, x, y ;
    cout << "x=";
    cin >> x ;
    y=(abs( sin(x))+cos(x)) / x*x - exp(a+x);
    cout << "y=" << y;
    return 0;
}
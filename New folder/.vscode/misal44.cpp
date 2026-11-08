#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a=7.4, x,y;
    cout << "x=" ;
    cin >> x;
    if (0.3<x && x<=1.2) {
        y=(sin(x*x*M_PI))/ (sqrt((pow(x,3))+a*a));
    }
    else if (1.2<x && x<=1.8) {
        y=M_PI*cos(x)+a*a*x;
    }
    else if (x>1.8) {
        y=sqrt(a*pow(M_PI,3)*x*x);
    }
    else {
        cout << "error" ;
    }
cout << "y=" << y;
return 0;
}
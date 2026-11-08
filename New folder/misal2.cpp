#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a= 3.5, b= 1.7, x, y;
    cout << " x=" ;
    cin >> x ;
    if (x>0.8) {
        y=(a*a*b*x+cos(x))/ sin(a*x);
    }
    else if (0.8<= x && x <= 2.4) {
        y= sqrt( fabs(sin(x)) + M_PI*cos(x) );
    }
    else if ( x>2.4) {
        y=sqrt (a*x-b*b);
    }
    else{
        cout << " error" ;
    }
    cout << "y=" << y;
    return 0;
}
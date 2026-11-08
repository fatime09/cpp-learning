#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, y;
    cout << " x=";
    cin >> x;
    if (x<0.5) {
        y= 2*M_PI*pow(x,3) +sin(x) ;
    }
    else if (x==0.5) {
        y=sqrt(fabs(sin(x)))+ M_PI*cos(x);
    }
    else if (x>0.5) {
        y=(x*x+M_PI*x)/(2*sin(x));
    }
    else {
        cout << "error" ;
        return 0;
    }
    cout << "y=" << y;
    return 0;
}
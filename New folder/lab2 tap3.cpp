#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double x,y,a;
    cout << "x=" ;
    cin >> x;
    cout<< "a=";
    cin >> a;
    if (0.3< x&& x<=1.2){
        y=(sin(x*x)*M_PI)/sqrt (pow(x,3)+a*a);
    }
    else if (1.2<x&&x<=1.8){
        y=M_PI*cos(x)+a*a*x;
    }
    else if (x>1.8){
        y=sqrt(a*pow(M_PI,3)*x*x);
    }
    else {
        cout << "error";
        return 0;
    }
    cout << "y=" << y ;
    return 0;
}
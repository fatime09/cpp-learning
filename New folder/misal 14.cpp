#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x=1.825 , a= 18.225, z= -3.298 ;
    double  b= a - x *  a - z / z - x  /  1 + z*z+ x*x ;
    cout << "y=" << fabs ( x - sqrt (fabs(b)/ (x)) );
return 0;
}
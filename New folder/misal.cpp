#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a= 3.5, b= 1.7, x, z;
cout << "Enter x: ";
cin >> x;
if (0.1<x && x<=0.4) {
  z=sqrt(fabs(M_PI*a*a+ pow(x,3)));
}
else if (0.4<x && x<=0.8) {
  z= sin(((2* M_PI )/x) + a*a);
}
else if (x>0.8) {
  z= M_PI* cos(x);
}
else {
  cout<< "error" ;
  return 0;
}
cout << "z=" << z;
    return 0 ;
}
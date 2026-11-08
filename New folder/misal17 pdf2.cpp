#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a= 3.5, b= 1.7, x, y;
cout << x;
cin >> x;
if (x<1) {
    y= 1.5* pow(cos(x),2) + sqrt(fabs(tan(x)));
}
else if (x==1) {
    y= 1.8*a*x + log(fabs(x));
}
else if (1<x&& x<2) {
    y=pow((x-2),2) +6;
}
else {
    cout << "error";
}
cout<< "y=" << y;
return 0;
}

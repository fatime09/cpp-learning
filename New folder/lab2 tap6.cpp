#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x,y;
    cout << "x=";
    cin >> x;
    if (x/2==0){
        y=x/2;
    }
    else {
        y=x*3;
    }
    cout << "y=" << y;
    return 0;

}
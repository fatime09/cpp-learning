#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    cout << "x=" ;
    cin >> x;
    if (x>0){
        cout << "x=" << x*x ;
        return 0;
    }
    else {
        cout << "x=" << abs(x);
        return 0;
    }
    return 0;
}
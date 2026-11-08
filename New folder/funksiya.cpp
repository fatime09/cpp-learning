#include <iostream>
#include <cmath>
using namespace std;
double daireSahe (double r) {
    return 3.14*r*r;
}
int main() {
    cout << "sahe1=" << daireSahe(2) << endl;
    cout << "sahe2=" << daireSahe(5) << endl;
    return 0;
}
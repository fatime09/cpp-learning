#include <iostream>
using namespace std;
double daireSahesi(double r) {
    return 3.14*r*r;
}
bool silindrHecmi(double r,double h) {
    return daireSahesi(r)*h;
}
int main() {
    double r,h;
    cout << "r=" ;
    cin >> r;
    cout << "h=" ;
    cin >> h;
    if (silindrHecmi(r,h)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
return 0;
}
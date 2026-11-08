#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double en, uzunluq;
    cin >> en >> uzunluq ;
    double sahe= en*uzunluq;
    double perimetr=2*(sahe+uzunluq);
    cout << "Sahe=" << sahe << endl ;
    cout << "Perimetr=" << perimetr ;
    return 0;
}
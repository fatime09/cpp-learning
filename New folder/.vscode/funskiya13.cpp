#include <iostream>
using namespace std;
double ortaBal(double a, double b, double c) {
    return ((a+b+c)/3);
}
bool kecdiMi (double a, double b, double c) {
    double orta=ortaBal(a,b,c);
    return orta >= 50;
}
int main() {
    cout << "bal1=" << ortaBal(60,70,80) << endl;
    if (kecdiMi(60,70,80)) {
        cout << "kecdi" << endl;
    }
    else {
        cout << "kecmedi" << endl;
    }
    cout << "bal2=" << ortaBal(45,55,50) << endl;
    if (kecdiMi (45,55,50)) {
        cout << "kecdi" << endl;
    }
    else {
        cout << "kecmedi"<< endl;
    }
    cout << "bal3=" << ortaBal(40,50,30);
    if (kecdiMi (40,50,30)) {
        cout << " kecdi" << endl;
    }
    else {
        cout << "kecmedi" ;
    }
return 0;
}
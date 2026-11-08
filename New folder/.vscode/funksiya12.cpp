#include <iostream>
#include <cmath>
using namespace std;
double endirimliQiymet ( double qiymet, double faiz) {
   return qiymet - qiymet * faiz/100;
}
bool odenisVar (double qiymet, double faiz, double balans) {
    double son=endirimliQiymet(qiymet, faiz);
    return balans >=son;
}
int main () {
    cout << "sonqiymet1=" << endirimliQiymet(200,25) << endl;
    if (odenisVar(200, 25, 160)) {
        cout << "ala bilersiniz" << endl;
    }
    else {
        cout << "pul catmir" << endl;
    }
    cout << "sonqiymet2=" << endirimliQiymet(120, 10) << endl;
    if ( odenisVar (120,10,100)) {
        cout << "ala bilersiz" << endl;
    }
    else {
        cout << "pul catmir" << endl;
    }
    cout << "sonqiymet3=" << endirimliQiymet(80,50) << endl;
    if (odenisVar(80,50,40)) {
        cout << "ala bilersiz" << endl;
    }
    else {
        cout << "pul catmir" << endl;
    }
return 0;
}
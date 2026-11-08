#include <iostream>
using namespace std;
double farenheit(double c) {
    return c*9/5+32;
}
bool qizdirmaVarmi(double c) {
    return farenheit(c) >=100;
}
int main() {
    double c;
    cout << "c=";
    cin >> c;
    if (qizdirmaVarmi(c)) {
        cout << "qizdirma var";
    }
    else {
        cout << "qizdirma yoxdur";
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
class Endirim {
    public :
    double SonQiymet(double qiymet, double endirim) {
        return qiymet-(qiymet*endirim/100);
    }
};
int main () {
    Endirim e;
    double qiymet, endirim;
    cout << "qiymet=";
    cin >> qiymet;
    cout << " endirim=";
    cin >> endirim;
    cout << "yeniqiymet=" << e.SonQiymet(qiymet,endirim);
    return 0;
}
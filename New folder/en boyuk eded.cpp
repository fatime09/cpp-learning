#include <iostream>
#include <cmath>
using namespace std;
class UcEded {
    public:
    double EnBoyukEded(double a, double b, double c) {
        if (a>b && a>c) {
            return a;
        }
        else if (b>a && b>c) {
            return b;
        }
        else {
            return c;
        }
    }
};
int main () {
    UcEded u;
    double a,b,c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    cout << "en boyuk eded=" << u.EnBoyukEded(a,b,c);
    return 0;
}
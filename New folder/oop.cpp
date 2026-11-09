#include <iostream>
#include <cmath>
using namespace std;
class Daire {
    public:
      double Sahe(double r) {
        return M_PI*r*r;
      }
      double Uzunluq(double r) {
        return 2*M_PI*r;
      }
};
int main() {
    Daire d;
    double r;
    cout << "r=";
    cin >> r;
    cout << "sahr=" << d.Sahe(r) << endl;
    cout << "uzunluq=" << d.Uzunluq(r);
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
class Tempuratur {
    public:
        double Temp(double C) {
            if (C <0) {
                C=0;
            }
            return (9.0/5.0) * C + 32;
        }
        
} ;
int main() {
    Tempuratur t;
    double C;
    cout << "C=";
    cin >> C;
    cout << "F=" << t.Temp(C);
    return 0;
}
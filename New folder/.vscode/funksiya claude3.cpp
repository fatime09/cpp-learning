#include <iostream>
using namespace std;
double yolHaqqi(double km) {
    return 1.5 + km * 0.8;
}
bool catdirilarmi(double km, double pul) {
   return yolHaqqi(km) <= pul ;
}
int main () {
    double km,pul;
    
    if (catdirilarmi (10,10)) {
        cout << " true" << endl;
    }
    else {
        cout << " false" << endl;
    }
return 0;
}
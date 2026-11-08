#include <iostream>
using namespace std;
double ortabal(double imtahan, double seminar) {
    return (imtahan + seminar) / 2;
}
bool kecdiMi(double imtahan, double seminar) {
    return ortabal(imtahan, seminar) >= 51;
}
int main() {
    double imtahan, seminar;
    if (kecdiMi(60,40)) {
        cout << "kecdin" << endl;
    } 
    else {
        cout << "kesildin" << endl;
    }
return 0;
}
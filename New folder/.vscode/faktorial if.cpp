#include <iostream>
using namespace std;
long long faktorial (int n) {
    if (n==0) {
        return 1;
    }
    else {
        return n*faktorial(n-1);
    }
    return 0;
}
int main () {
    int n;
    cout << "n=";
    cin >> n;
    cout << "n!=" << faktorial(n);
    return 0;
}
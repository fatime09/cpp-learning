#include <iostream>
#include <cmath>
using namespace std;
class CutEdedler {
    private :
        int cem=0;
    public:
     double Hesabla(int i, int n) {
        for (int j=i; j<=n; j++) {
            if (j%2==0) {
               cem+=j;
            }
        }
        return cem;
     }
};
int main() {
    CutEdedler cut;
    int i, n;
    cout << "i=";
    cin >> i;
    cout << "n=";
    cin >> n;
    cout << "cem=" << cut.Hesabla(i,n);
    return 0;
}
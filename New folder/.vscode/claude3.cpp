#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, x,i;
    double s=0;
cout << "n=";
cin >> n;
cout << "x=";
cin >> x;
for (i=1; i<=n ; i++){
    if (i%2==0 && i<6) {
        s=s+cos(x*i);
    }
    else if (i%3==0) {
        s=s+i*i;
    }
    else {
        s=s+exp(-x);
    }
cout << "s=" << s<< endl;
if (s<0) {
    cout << "menfidir" << endl;
 }
 else if (s==0) {
    cout << "sifirdir" << endl;
 }
 else if (s>100){
    cout << "100den boyukdur" << endl;
 }
 else {
    cout << "musbetdir" << endl ;
 }
 }
return 0;
}
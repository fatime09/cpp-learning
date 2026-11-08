#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, x, i;
    double s=0;
    cout << "n=";
    cin >> n;
    cout << "x=";
    cin >> x;
for (i=1; i<=n; i++) {
    if (i%2==0 && i<6) {
        s=s+sin(x*i);
    }
    else if (i%3==0) {
        s=s+sqrt(i)+exp(x);
    }
    else {
        s=s+(double)(i*i)/(x+2) ;
    }
cout << "s=" << s << endl;
if (s<0 && x<0){
    cout << "x menfidir" << endl;
}
else if (s>100){
    cout << "s boyukdur" << endl;
}
else {
    cout << "s kicikdir" << endl;
}
}
}
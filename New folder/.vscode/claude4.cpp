#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,i;
    double p=1.0, c=0,t=0;
    cout << "n=";
    cin >> n;
for (i=1; i<=n; i++){
    if (i%5==0) {
        p=p*2;
    }
    else if(i%2==0) {
        c=c+1;
    }
    else {
        t=t+1;
    }
cout << "p=" << p << endl;
cout << "c=" << c << endl;
cout << "t=" << t << endl;
if (t>p) {
    cout << "t boyukdur" << endl;
}
else if (t<p) {
    cout << "p boyukdur" << endl;
}
else {
    cout << "beraberdir" ;
}
}
return 0;
}
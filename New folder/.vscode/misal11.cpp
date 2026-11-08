#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,y,a,b,c ;
        cout << "n=";
        cin >> n;
        a=n/100;
        b=(n/10) % 10;
        c=n%10;
        y=a*a+b+c;
        cout << y;
return 0;
}
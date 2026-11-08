#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,x,i;
    double s=0,mx=0;
    cout << "n=";
    cin >> n;
    cout << "x=";
    cin >> x;
for (i=1; i<=n ; i++ ){
    if (i%2==0 && x>0) {
        s= s+log(x*i);
        cout << "s1=" << s << endl;
    }
    else if (i%3==0 || i%5==0) {
        s=s+sqrt(i)*x;
    }
    else if (x<0){
        s=s-fabs(x);
    }
    else {
        s=s+1;
    }
    if(i==1 || s>mx) {
        mx=s;
    }
    cout << "s=" << s << endl;
}
cout << "s=" << s << endl;
cout << "max=" << mx ;
return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double n,x,s=0;
    int i;
cout << "n=";
cin >> n;
for (i=1; i<=n ; i++) {
    if (i<4){
        s=s+x*i;
        cout << "s=" << s << endl;
        cout << "i=" << i << endl;
    }
    else if (i%2==0){
        s=s+sqrt(i);
        cout << "s=" << s << endl;
        cout << "i=" << i << endl;
    }
    else {
        s=s+x/i;
        cout << "s=" << s << endl;
        cout << "i=" << i << endl;
    }
}
return 0;
}
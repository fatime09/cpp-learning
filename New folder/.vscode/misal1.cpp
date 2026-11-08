#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,i;
    double s=0;
cout << "n=";
cin >> n;
for (i=1; i<=n; i++){
    if (i%2==0){
        s=s+i;
    }
    else if (i%3==0){
        s=s+i*i;
    }
    else {
        s=s-1;
    }
cout << "s=" << s << endl;
if (s>50){
    cout<< "s boyukdur" << endl;
}
else {
    cout << "s kicikdir" << endl;
}
}
return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double v1,v2, v3;
    cin >> v1 >> v2 >> v3;
    if (v1==v2 && v2==v3){
        cout << "Eyni suret";
    }
    else if(v1>v2 && v1>v3) {
        cout << "v1 boyukdur" ;
    }
    else if (v2>v1 && v2>v3) {
        cout << "v2 boyukdur";
    }
    else if (v3>v1 && v3>v2) {
        cout << "v3 boyukdur" ;
    }
    else {
        cout <<"Eyni suret" ;
    }
return 0;
}
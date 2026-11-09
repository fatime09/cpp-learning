#include <iostream>
#include <cmath>
using namespace std;
string calculator(double a,double b,char op) {
    if (op=='+') {
        return to_string(a+b);
    }
    else if (op=='-') {
        return to_string(a-b);
    }
    else if (op=='/') {
        if (b==0) {
            return "error:cannot divide by zero";
        }
        else {
            return to_string(a/b);
        }
    }
    else {
        return "error:unknown operator";
    }
}
int main() {
    double a,b;
    char op;
    cout << "a=";
    cin >> a;
    cout << "op=";
    cin >> op;
    cout << "b=";
    cin >> b;
    cout << "result:" << calculator(a,b,op);
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    double a,b;
    char op;
    cout << "a=";
    cin >> a;
    cout << "op=";
    cin >> op;
    cout << "b=";
    cin >> b;
    if (op=='+') {
        cout << "Result: " << a + b << endl;
    }
    else if (op=='-') {
        cout << "Result:" << a-b <<endl;
    }
    else if (op=='/') {
        if (b==0) {
            cout << "error:cannot divide by zero." << endl;
        }
        else {
            cout << "Result:" << a/b << endl;
        }
    }
    else {
        cout << "error:unkown operator" << endl;
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
class Calculator {
    public:
    double calculator(double a, double b, char op) {
        if (op=='+') {
            return a+b;
        }
        else if (op=='-') {
            return a-b;
        }
        else if (op=='/') {
            if (b==0) {
                cout << "error:cannot divide by zero." << endl;
                return 0;
            }
            else {
                return a/b;
            }
        }
        else {
            cout << "error: unkown operator" << endl;
            return 0;
        } 
    }
};
int main () {
    Calculator clac;
    double a ,b ;
    char op;
    cout << "a=";
    cin >> a;
    cout << "op=";
    cin >> op;
    cout << "b=";
    cin >> b;
    cout << "result:" << clac.calculator (a,b,op);
    return 0;
}   
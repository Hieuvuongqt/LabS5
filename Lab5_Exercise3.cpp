#include <cmath>
#include <iostream>
using namespace std;
 
int main() {
    int i, f1, f2, min, ucln = 1;
 
    cout << "Enter the first number: ";
    cin >> f1;
    cout << "Enter the second number: ";
    cin >> f2;
    if(f1 == 0 && f2 == 0) {
        cout << "No result" << endl;
    } else if (f1 != 0 && f2 == 0) {
        cout << "Greatest common divisor of " << f1 << " and " << f2 << " is " << abs(f1) << endl;
    } else if (f1 == 0 && f2 != 0) {
        cout << "Greatest common divisor of " << f1 << " and " << f2 << " is " << abs(f2) << endl;
    } else {
        if(f1 < f2) {
            min = f1;
        } else {
            min = f2;
        }
         
        for(int i = 1; i <= min; i++) {
            if(f1%i == 0 && f2%i == 0) {
                ucln = i;
            }
        }
        cout << "Greatest common divisor of " << f1 << " and " << f2 << " is " << ucln << endl;
    }
    return 0;
}

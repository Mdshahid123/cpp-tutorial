//Calculate x raised to the power y
#include <iostream>
using namespace std;

int power(int base, int pow) {
    int result = 1;
    for (int i = 1; i <= pow; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int x, y;
    cout << "Enter base and exponent: ";
    cin >> x >> y;
    cout << x << " raised to the power " << y << " is:" << power(x, y) << endl;
    return 0;
}

// Calculate the average of 3 numbers:
#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, average;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3) / 3;
    cout << "Average: " << average << endl;
    return 0;
}

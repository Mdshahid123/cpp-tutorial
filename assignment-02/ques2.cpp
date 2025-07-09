// Find the highest value digit in a given number:



#include <iostream>
using namespace std;
#include <climits>
using namespace std;

int highestDigit(int n) {
    int max = INT_MIN;
    while (n > 0) {
        int digit = n % 10;
        if (digit > max)
        {
             max= digit;
        }
         
         n /= 10;
    }
    return max;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Highest digit: " << highestDigit(num) << endl;
    return 0;
}

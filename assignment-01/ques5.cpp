// Calculate the volume of a cuboid:

#include <iostream>
using namespace std;

int main() {
    
    double length, width, height, volume;
    cout << "Enter length, width, and height of the cuboid: ";
    cin >> length >> width >> height;
    volume = length * width * height;
    cout << "Volume: " << volume << endl;
    return 0;
}

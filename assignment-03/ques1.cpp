//Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
//number of instance member variables and also define instance member functions to
//set values for time and display values of time.
#include<iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Function to set time values
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to display time
    void displayTime() {
        cout << hours << " hr " << minutes << " min " << seconds << " sec" << endl;
    }
};

int main() {
    Time t1;

    t1.setTime(3, 45, 20); // Set time
    t1.displayTime();      // Output: 3 hr 45 min 20 sec

    return 0;
}

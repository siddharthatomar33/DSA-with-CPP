#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Calculate the number of Tuesdays
    int fullWeeks = N / 7;        // Each week has one Tuesday
    int remainingDays = N % 7;   // Days leftover after complete weeks

    // Check if there's a Tuesday in the remaining days
    int totalTuesdays = fullWeeks + (remainingDays >= 2 ? 1 : 0);

    cout << totalTuesdays << endl;
    return 0;
}
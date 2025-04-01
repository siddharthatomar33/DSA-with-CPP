#include <iostream>
#include <cmath> // For abs()
using namespace std;

int main() {
    int A, B, K;
    cout << "Enter Chef's coordinate (A): ";
    cin >> A;
    cout << "Enter Chefina's coordinate (B): ";
    cin >> B;
    cout << "Enter maximum step size (K): ";
    cin >> K;

    // Calculate the absolute distance
    int distance = abs(A - B);

    // Variable to store the number of steps
    int steps;

    // Check if distance is perfectly divisible by K
    if (distance % K == 0) {
        // If divisible, divide the distance by K
        steps = distance / K;
    } else {
        // Otherwise, add one more step to cover the remaining distance
        steps = (distance / K) + 1;
    }

    // Output the result
    cout << "Minimum steps required: " << steps << endl;

    return 0;
}
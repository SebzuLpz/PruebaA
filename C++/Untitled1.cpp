#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int num;
    double sum = 0, product = 1, min, max;
    int count = 0;

    cout << "Enter the numbers (type -1 to stop): ";

    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }

        sum += num;
        product *= num;
        if (count == 0) {
            min = num;
            max = num;
        } else {
            min = min < num ? min : num;
            max = max > num ? max : num;
        }
        count++;
    }

    if (count == 0) {
        cout << "No numbers were entered." << endl;
    } else {
        cout << "The sum is: " << sum << endl;
        cout << "The product is: " << product << endl;
        cout << "The average is: " << sum / count << endl;
        cout << "The smallest number is: " << min << endl;
        cout << "The largest number is: " << max << endl;
    }

    return 0;
}

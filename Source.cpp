#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ARRAY_SIZE = 10;
const int MIN_VALUE = 1000;
const int MAX_VALUE = 9999;

int main() {
    vector<int> array(ARRAY_SIZE);

    srand(time(nullptr));

    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    }

    // Print every element in order of appearance
    cout << "The random integers: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    // Print every element at an even index
    cout << "Even indices:        ";
    for (int i = 0; i < ARRAY_SIZE; i += 2) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Print every even element
    cout << "Even values:         ";
    for (int num : array) {
        if (num % 2 == 0) {
            cout << num << " ";
        }
    }
    cout << endl;

    // Print all elements in reverse order
    cout << "Reversed order:      ";
    for (int i = ARRAY_SIZE - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Print only the first and last element
    cout << "First and last:      " << array.front() << " " << array.back() << endl;

    return 0;
}

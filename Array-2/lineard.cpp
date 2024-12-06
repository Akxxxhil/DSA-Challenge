#include <iostream>
using namespace std;

int main() {
    int arr[5][4] = {{1, 2, 10, 4}, {2, 3, 4, 1}, {5, 6, 1, 3}, {2, 4, 6, 8}, {1, 9, 9, 6}};
    int target = 11;
    bool found = false; // Flag to track if target is found

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == target) {
                cout << "Target is available" << endl;
                found = true; // Set flag to true
                break; // Exit inner loop
            }
        }
        if (found) {
            break; // Exit outer loop if target is found
        }
    }

    if (!found) { // Check if target was not found
        cout << "Target is not present" << endl;
    }

    return 0;
}
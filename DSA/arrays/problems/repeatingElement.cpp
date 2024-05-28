#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> array[i];
    }

    const int x = 1000;
    int idx[x];

    for (int i = 0; i < x; i++) {
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (array[i] >= x) {
            cout << "Element " << array[i] << " exceeds max index " << x - 1 << endl;
            continue;
        }
        if (idx[array[i]] != -1) {
            minidx = min(minidx, idx[array[i]]);
        } else {
            idx[array[i]] = i; // Update the index of the element
        }
    }

    if (minidx == INT_MAX) {
        cout << "No repeating elements found" << endl;
    } else {
        cout << "Repeating number with the lowest index is at index: " << minidx << endl;
    }

    return 0;
}

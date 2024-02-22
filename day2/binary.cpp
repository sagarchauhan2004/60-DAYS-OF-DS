//Write a function to perform a binary search on a sorted array of integers to find a target element.
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7, 9, 11, 13};
    bool flag = false;
    int key = 7;
    int l = 0;
    int h = sizeof(a) / sizeof(a[0]) - 1;

    while (l <= h) {
        int m = (l + h) / 2;

        if (a[m] == key) {
            cout << "element found.." << endl;
            flag = true;
            break;
        }

        if (a[m] < key) {
            l = m + 1;
        }
        if (a[m] > key) {
            h = m - 1;
        }
    }

    if (!flag) {
        cout << "element not found.." << endl;
    }

    return 0;
}

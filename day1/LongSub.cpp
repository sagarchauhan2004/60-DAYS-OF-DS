// Given an unsorted array of integers, find the length of the longest increasing subsequence.

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int a[] = {3, 9, 1, 13, 10, 4, 20, 2, 11, 12};
    int n = sizeof(a) / sizeof(a[0]);

    unordered_set<int> hs;
    for (int i = 0; i < n; i++) {
        hs.insert(a[i]);
    }

    int long_length = 0;
    for (int i = 0; i < n; i++) {
        if (hs.find(a[i] - 1) == hs.end()) {
            int no = a[i];
            while (hs.find(no) != hs.end()) {
                no++;
            }
            if (long_length < no - a[i]) {
                long_length = no - a[i];
            }
        }
    }

    cout << "Longest subsequence length is: " << long_length << endl;

    return 0;
}

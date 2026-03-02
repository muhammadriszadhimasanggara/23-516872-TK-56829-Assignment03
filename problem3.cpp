// Compilation: g++ -std=c++17 -Wall -Wextra -g -fsanitize=address -o problem3 problem3.cpp

#include <iostream>
using namespace std;

// O(n)
int linearSearch(int* arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

// O(log n)
int binarySearch(int* arr, int n, int target) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
}

// O(n)
int* generateSortedArray(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = i * 2; // {0, 2, 4, ..., 2*(n-1)}
    return arr;
}

int main() {
    int sizes[] = {10, 100, 1000};

    for (int n : sizes) {
        int* arr = generateSortedArray(n);
        int midIndex = n / 2;
        int existingTarget = arr[midIndex];
        int missingTarget = -1; // guaranteed not in array (all values >= 0)

        cout << "=== n = " << n << " ===\n";

        // Search for existing value
        int li1 = linearSearch(arr, n, existingTarget);
        int bi1 = binarySearch(arr, n, existingTarget);
        cout << "Target (exists) = " << existingTarget << "\n";
        cout << "  linearSearch  index: " << li1 << "\n";
        cout << "  binarySearch  index: " << bi1 << "\n";
        cout << "  Match: " << (li1 == bi1 ? "YES" : "NO") << "\n";

        // Search for missing value
        int li2 = linearSearch(arr, n, missingTarget);
        int bi2 = binarySearch(arr, n, missingTarget);
        cout << "Target (missing) = " << missingTarget << "\n";
        cout << "  linearSearch  index: " << li2 << "\n";
        cout << "  binarySearch  index: " << bi2 << "\n";
        cout << "  Match: " << (li2 == bi2 ? "YES" : "NO") << "\n\n";

        delete[] arr;
    }

    return 0;
}

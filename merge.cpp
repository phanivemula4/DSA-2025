#include <iostream>
using namespace std;

void merge(int e[], int f, int g, int h) {
    int p[100];
    int left = f;
    int right = g;
    int i = 0;

    // Merge the two sorted subarrays
    while (left < g && right <= h) {
        if (e[left] <= e[right]) {
            p[i++] = e[left++];
        } else {
            p[i++] = e[right++];
        }
    }

    // Copy remaining elements from left half
    while (left < g) {
        p[i++] = e[left++];
    }

    // Copy remaining elements from right half
    while (right <= h) {
        p[i++] = e[right++];
    }

    // Copy merged array back to original array
    for (int j = 0; j < i; j++) {
        e[f + j] = p[j];
    }
}

void splitarray(int b[], int c, int d) {
    if (c >= d) return; // base case: 0 or 1 element

    int mid = (c + d) / 2;

    splitarray(b, c, mid);
    splitarray(b, mid + 1, d);
    merge(b, c, mid + 1, d);
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    splitarray(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}


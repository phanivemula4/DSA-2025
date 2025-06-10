#include <bits/stdc++.h>
using namespace std;

int main() {
    int b = 78689;
    string a = to_string(b);
    for (int i = a.length() - 1; i >= 0; i--) {
        cout << a[i];
    }
    return 0;
}


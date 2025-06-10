#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    string b = to_string(a);
    string c = "";

    for (int i = b.length() - 1; i >= 0; i--) {
        c += b[i];
    }
	if (b == c) {
        cout << "palindrome";
    } else {
        cout << "not palindrome";
    }

    return 0;
}


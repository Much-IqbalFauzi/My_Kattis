#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;
    while (n--) {
        string d;
        int rev;
        cin >> d;
        cin >> rev;

        total += rev;
    }

    if (total > 0) {
        cout << "Usch, vinst" << endl;
    } else if (total < 0) {
        cout << "Nekad" << endl;
    } else {
        cout << "Lagom" << endl;
    }
}
#include <iostream>

using namespace std;

int main() {
    int n, b;
    cin >> n;
    cin >> b;
    
    int found = n;
    for (int x=0; x<n; x++) {
        int i;
        cin >> i;
        if (i == b) {
            found = x;
        } 
    }

    if (found == 0) {
        cout << "fyrst" << endl;
    } else if (found == 1) {
        cout << "naestfyrst" << endl;
    } else {
        cout << found + 1 << " fyrst" << endl;
    }
}
#include <iostream>

using namespace std;

int main() {
    int x, total = 0;
    cin >> x;

    for (int i=0; i<x; i++) {
        int y;
        cin >> y;
        total += y;
    }

    cout << total / x << endl;
}
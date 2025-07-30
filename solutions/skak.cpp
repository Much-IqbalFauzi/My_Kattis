#include "iostream"

using namespace std;

int main() {
    int x, y;
    int a, b;
    cin >> x;
    cin >> y;
    cin >> a;
    cin >> b;

    if (x == a || y == b) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
}
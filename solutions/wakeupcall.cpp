#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    int at = 0;
    int bt = 0;
    while (a--) {
        int x;
        cin >> x;
        at += x;
    }

    while (b--) {
        int x;
        cin >> x;
        bt += x;
    }

    if (at > bt) {
        cout << "Button 1" << endl;
    } else if (at < bt) {
        cout << "Button 2" << endl;
    } else {
        cout << "Oh no" << endl;
    }
}
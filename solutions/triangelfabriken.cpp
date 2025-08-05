#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > 90 || b > 90 || c > 90) {
        cout << "Trubbig Triangel" << endl;
    } else if (a < 90 && b < 90 && c < 90) {
        cout << "Spetsig Triangel" << endl;
    } else {
        cout << "Ratvinklig Triangel" << endl;
    }
}
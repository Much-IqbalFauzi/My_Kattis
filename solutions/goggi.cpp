#include "iostream"

using namespace std;

int main() {
    int a, b;
    char q;

    cin >> a;
    cin >> q;
    cin >> b;

    if (a < b) {
        cout << "<" << endl;
    } else if (a > b) {
        cout << ">" << endl;
    } else {
        cout << "Goggi svangur!" << endl;
    }
}
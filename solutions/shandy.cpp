#include "iostream"

using namespace std;

int main() {

    int b, l;
    cin >> b;
    cin >> l;

    b *= 2;
    l *= 2;

    if (b < l) {
        cout << b << endl;
    } else {
        cout << l << endl;
    }
}
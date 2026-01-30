#include "iostream"

using namespace std;

int main() {

    int h, w, l, c;

    cin >> h;
    cin >> w;
    cin >> l;
    cin >> c;

    int vol = h * w * l;

    if (vol == c) {
        cout << "COZY" << endl;
    } else if (vol > c) {
        cout << "SO MUCH SPACE" << endl;
    } else {
        cout << "TOO TIGHT" << endl;
    }
}
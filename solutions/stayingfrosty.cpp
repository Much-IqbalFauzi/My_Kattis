#include "iostream"

using namespace std;

int main() {
    int w, p;

    cin >> w;
    cin >> p;

    if ((p * 2 * 180) >= w) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
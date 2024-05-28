#include "iostream"

using namespace std;

int main() {

    int n;
    cin >> n;

    int prev = 0;

    bool res = true;
    while (n--) {
        int g, r;
        cin >> g;
        cin >> r;
        prev += g;
        if (prev-r < 0) {
            res = false;
        }
    }

    if (res) {
        cout << "possible" << endl;
    } else {
        cout << "impossible" << endl;
    }
}
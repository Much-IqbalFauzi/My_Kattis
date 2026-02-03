#include "iostream"

using namespace std;

int main() {
    int n, total = 0;

    cin >> n;

    for (int i = 0; i < n; i ++) {
        int d;
        cin >> d;

        if (d % 2 == 1) {
            total += 1;
        }
    }

    cout << total << endl;
}
#include "iostream"

using namespace std;

int main () {
    int n, total = 0;
    cin >> n;

    for (int i=1; i<n; i++) {
        int triple = i * (i+1) * (i+2);
        if (triple > n) {
            break;
        }
        if (triple < n) {
            total ++;
        }
    }

    cout << total << endl;
}
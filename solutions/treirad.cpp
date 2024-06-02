#include "iostream"

using namespace std;

int main () {
    int n, total = 0;
    cin >> n;
    int h = n/2;

    for (int i=1; i<h; i++) {
        int triple = i * (i+1) * (i+2);
        if (triple < n) {
            total ++;
        }
    }

    cout << total << endl;
}
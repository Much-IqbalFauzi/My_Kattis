#include "iostream"

using namespace std;

int main() {
    int loop;
    cin >> loop;

    int n = 0;

    while (loop--) {
        int x;
        cin >> x;
        n += x;
    }

    cout << n << endl;
}
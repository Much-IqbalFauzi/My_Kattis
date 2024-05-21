#include "iostream"

using namespace std;

int main() {
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    int remain = b + c;
    int person = 0;
    while (a--) {
        int f;
        cin >> f;
        f += 14;
        if (f <= remain) {
            person ++;
        }
    }

    cout << person << endl;
}
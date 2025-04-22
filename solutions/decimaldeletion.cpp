#include "iostream"

using namespace std;

int main() {
    double n;
    cin >> n;

    (n - (int) n >= 0.5) ?
        cout << (int) n + 1 << endl;
    :
        cout << (int) n << endl;
    ;
}
